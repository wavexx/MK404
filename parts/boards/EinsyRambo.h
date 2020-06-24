/*
	EinsyRambo.h - Board definition for the Prusa EinsyRambo
	Copyright 2020 VintagePC <https://github.com/vintagepc/>

 	This file is part of MK3SIM.

	MK3SIM is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	MK3SIM is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with MK3SIM.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <Board.h>                               // for Board
#include <stdint.h>                              // for uint32_t
#include "wiring/Einsy_1_1a.h"                   // for Einsy_1_1a
#include <string>                                // for string
#include "Beeper.h"                              // for Beeper
#include "Button.h"                              // for Button
#include "Fan.h"                                 // for Fan
#include "HD44780GL.h"                           // for HD44780GL
#include "Heater.h"                              // for Heater
#include "IRSensor.h"                            // for IRSensor
#include "LED.h"                                 // for LED
#include "PINDA.h"                               // for PINDA
#include "RotaryEncoder.h"                       // for RotaryEncoder
#include "SDCard.h"                              // for SDCard
#include "SerialLineMonitor.h"                   // for SerialLineMonitor
#include "TMC2130.h"                             // for TMC2130
#include "Thermistor.h"                          // for Thermistor
#include "VoltageSrc.h"                          // for VoltageSrc
#include "uart_pty.h"                            // for uart_pty
#include "w25x20cl.h"                            // for w25x20cl

extern "C"
{
	#include "../include/MK3/Configuration_prusa.h"
	#undef MMU_HWRESET
}

namespace Boards
{
	class EinsyRambo: public Board
	{
		public:
			EinsyRambo(uint32_t uiFreq = 16000000)
				:Board(m_wiring,uiFreq){ SetBoardName("Einsy");};

		protected:
			void SetupHardware() override;

			void OnAVRReset() override;

			void OnAVRInit() override;

			void OnAVRDeinit() override;

			static constexpr float fScale24v = 1.0f/26.097f; // Based on rSense voltage divider outputting 5v

			bool m_bFactoryReset = false;

			HD44780GL lcd;
			RotaryEncoder encoder;
			Button PowerPanic = Button("Power Panic");
			Beeper m_buzzer;
			uart_pty UART0, UART2;
			SerialLineMonitor m_Mon0 = SerialLineMonitor("Serial0");
			Thermistor tExtruder, tBed, tPinda, tAmbient;
			Fan fExtruder = Fan(3300,'E'), fPrint = Fan(5000,'P',true);
			Heater hExtruder = Heater(1.5,25.0,false,'H',30,250),
				hBed = Heater(0.25, 25, true,'B',30,100);
			w25x20cl spiFlash;
			SDCard sd_card = SDCard();
			TMC2130 X = TMC2130('X'), Y = TMC2130('Y'), Z = TMC2130('Z'), E = TMC2130('E');
			VoltageSrc vMain = VoltageSrc(fScale24v, 24.f),
				vBed = VoltageSrc(fScale24v,23.9);
			IRSensor IR;
			PINDA pinda = PINDA((float) X_PROBE_OFFSET_FROM_EXTRUDER, (float)Y_PROBE_OFFSET_FROM_EXTRUDER);
			//MMU2 *mmu = nullptr;
			LED lPINDA = LED(0xFF0000FF,'P',true),
				lIR = LED(0xFFCC00FF,'I',true),
				lSD = LED(0x0000FF00,'C', true);

		private:
			const Wirings::Einsy_1_1a m_wiring = Wirings::Einsy_1_1a();
	};
};