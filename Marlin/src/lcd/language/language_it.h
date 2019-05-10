/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Italian
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */

#define DISPLAY_CHARSET_ISO10646_1

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" pronto.")
#define MSG_YES                             _UxGT("SI")
#define MSG_NO                              _UxGT("NO")
#define MSG_BACK                            _UxGT("Indietro")
#define MSG_SD_INSERTED                     _UxGT("SD Card inserita")
#define MSG_SD_REMOVED                      _UxGT("SD Card rimossa")
#define MSG_LCD_ENDSTOPS                    _UxGT("Finecor.") // Max 8 caratteri
#define MSG_LCD_SOFT_ENDSTOPS               _UxGT("Finecorsa Soft")
#define MSG_MAIN                            _UxGT("Menu principale")
#define MSG_ADVANCED_SETTINGS               _UxGT("Impostaz. avanzate")
#define MSG_CONFIGURATION                   _UxGT("Configurazione")
#define MSG_AUTOSTART                       _UxGT("Autostart")
#define MSG_DISABLE_STEPPERS                _UxGT("Disabilita Motori")
#define MSG_DEBUG_MENU                      _UxGT("Menu di debug")
#define MSG_PROGRESS_BAR_TEST               _UxGT("Test barra avanzam.")
#define MSG_AUTO_HOME                       _UxGT("Auto Home")
#define MSG_AUTO_HOME_X                     _UxGT("Home asse X")
#define MSG_AUTO_HOME_Y                     _UxGT("Home asse Y")
#define MSG_AUTO_HOME_Z                     _UxGT("Home asse Z")
#define MSG_AUTO_Z_ALIGN                    _UxGT("Allineam.automat. Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("Home assi XYZ")
#define MSG_LEVEL_BED_WAITING               _UxGT("Premi per iniziare")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Punto successivo")
#define MSG_LEVEL_BED_DONE                  _UxGT("Livel. terminato!")
#define MSG_Z_FADE_HEIGHT                   _UxGT("Fade Height")
#define MSG_SET_HOME_OFFSETS                _UxGT("Imp. offset home")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Offset applicato")
#define MSG_SET_ORIGIN                      _UxGT("Imposta Origine")
#define MSG_PREHEAT_1                       _UxGT("Preriscalda " PREHEAT_1_LABEL)
#define MSG_PREHEAT_1_N                     _UxGT("Preris." PREHEAT_1_LABEL " ")
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1_N _UxGT("Tutto")
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1_N _UxGT("Ugello")
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1_N _UxGT("Piatto")
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1_N _UxGT("conf")
#define MSG_PREHEAT_2                       _UxGT("Preriscalda " PREHEAT_2_LABEL)
#define MSG_PREHEAT_2_N                     _UxGT("Preris." PREHEAT_2_LABEL " ")
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2_N _UxGT("Tutto")
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2_N _UxGT("Ugello")
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2_N _UxGT("Piatto")
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2_N _UxGT("conf")
#define MSG_PREHEAT_CUSTOM                  _UxGT("Prerisc.personal.")
#define MSG_COOLDOWN                        _UxGT("Raffredda")
#define MSG_LASER_MENU                      _UxGT("Controllo laser")
#define MSG_LASER_OFF                       _UxGT("Laser Off")
#define MSG_LASER_ON                        _UxGT("Laser On")
#define MSG_LASER_POWER                     _UxGT("Potenza laser")
#define MSG_SPINDLE_REVERSE                 _UxGT("Inverti mandrino")
#define MSG_SWITCH_PS_ON                    _UxGT("Accendi aliment.")
#define MSG_SWITCH_PS_OFF                   _UxGT("Spegni aliment.")
#define MSG_EXTRUDE                         _UxGT("Estrudi")
#define MSG_RETRACT                         _UxGT("Ritrai")
#define MSG_MOVE_AXIS                       _UxGT("Muovi Asse")
#define MSG_BED_LEVELING                    _UxGT("Livella piano")
#define MSG_LEVEL_BED                       MSG_BED_LEVELING
#define MSG_LEVEL_CORNERS                   _UxGT("Livella spigoli")
#define MSG_NEXT_CORNER                     _UxGT("Prossimo spigolo")
#define MSG_EDITING_STOPPED                 _UxGT("Modif. Mesh Fermata")
#define MSG_MESH_X                          _UxGT("Indice X")
#define MSG_MESH_Y                          _UxGT("Indice Y")
#define MSG_MESH_EDIT_Z                     _UxGT("Valore di Z")
#define MSG_USER_MENU                       _UxGT("Comandi personaliz.")
#define MSG_UBL_DOING_G29                   _UxGT("G29 in corso")
#define MSG_UBL_UNHOMED                     _UxGT("Home XYZ prima")
#define MSG_UBL_TOOLS                       _UxGT("Strumenti UBL")
#define MSG_UBL_LEVEL_BED                   _UxGT("Unified Bed Leveling")
#define MSG_IDEX_MENU                       _UxGT("Modo IDEX")
#define MSG_OFFSETS_MENU                    _UxGT("Strumenti Offsets")
#define MSG_IDEX_MODE_AUTOPARK              _UxGT("Auto-Park")
#define MSG_IDEX_MODE_DUPLICATE             _UxGT("Duplicazione")
#define MSG_IDEX_MODE_MIRRORED_COPY         _UxGT("Copia speculare")
#define MSG_IDEX_MODE_FULL_CTRL             _UxGT("Pieno controllo")
#define MSG_X_OFFSET                        _UxGT("2° ugello X")
#define MSG_Y_OFFSET                        _UxGT("2° ugello Y")
#define MSG_Z_OFFSET                        _UxGT("2° ugello Z")
#define MSG_UBL_MANUAL_MESH                 _UxGT("Mesh Manuale")
#define MSG_UBL_BC_INSERT                   _UxGT("Metti spes. e misura")
#define MSG_UBL_BC_INSERT2                  _UxGT("Misura")
#define MSG_UBL_BC_REMOVE                   _UxGT("Rimuovi e mis.piatto")
#define MSG_UBL_MOVING_TO_NEXT              _UxGT("Spostamento succes.")
#define MSG_UBL_ACTIVATE_MESH               _UxGT("Attiva UBL")
#define MSG_UBL_DEACTIVATE_MESH             _UxGT("Disattiva UBL")
#define MSG_UBL_SET_TEMP_BED                _UxGT("Temp. Piatto")
#define MSG_UBL_BED_TEMP_CUSTOM             MSG_UBL_SET_TEMP_BED
#define MSG_UBL_SET_TEMP_HOTEND             _UxGT("Temp. Ugello")
#define MSG_UBL_HOTEND_TEMP_CUSTOM          MSG_UBL_SET_TEMP_HOTEND
#define MSG_UBL_MESH_EDIT                   _UxGT("Modifica Mesh")
#define MSG_UBL_EDIT_CUSTOM_MESH            _UxGT("Modif.Mesh personal.")
#define MSG_UBL_FINE_TUNE_MESH              _UxGT("Ritocca Mesh")
#define MSG_UBL_DONE_EDITING_MESH           _UxGT("Modif.Mesh fatta")
#define MSG_UBL_BUILD_CUSTOM_MESH           _UxGT("Crea Mesh personal.")
#define MSG_UBL_BUILD_MESH_MENU             _UxGT("Crea Mesh")
#define MSG_UBL_BUILD_MESH_M1               _UxGT("Crea Mesh " PREHEAT_1_LABEL)
#define MSG_UBL_BUILD_MESH_M2               _UxGT("Crea Mesh " PREHEAT_2_LABEL)
#define MSG_UBL_BUILD_COLD_MESH             _UxGT("Crea Mesh a freddo")
#define MSG_UBL_MESH_HEIGHT_ADJUST          _UxGT("Aggiusta Alt. Mesh")
#define MSG_UBL_MESH_HEIGHT_AMOUNT          _UxGT("Altezza")
#define MSG_UBL_VALIDATE_MESH_MENU          _UxGT("Valida Mesh")
#define MSG_UBL_VALIDATE_MESH_M1            _UxGT("Valida Mesh " PREHEAT_1_LABEL)
#define MSG_UBL_VALIDATE_MESH_M2            _UxGT("Valida Mesh " PREHEAT_2_LABEL)
#define MSG_UBL_VALIDATE_CUSTOM_MESH        _UxGT("Valida Mesh pers.")
#define MSG_UBL_CONTINUE_MESH               _UxGT("Continua Mesh")
#define MSG_UBL_MESH_LEVELING               _UxGT("Livell. Mesh")
#define MSG_UBL_3POINT_MESH_LEVELING        _UxGT("Livell. 3 Punti")
#define MSG_UBL_GRID_MESH_LEVELING          _UxGT("Livell. Griglia Mesh")
#define MSG_UBL_MESH_LEVEL                  _UxGT("Livella Mesh")
#define MSG_UBL_SIDE_POINTS                 _UxGT("Punti laterali")
#define MSG_UBL_MAP_TYPE                    _UxGT("Tipo di Mappa")
#define MSG_UBL_OUTPUT_MAP                  _UxGT("Esporta Mappa")
#define MSG_UBL_OUTPUT_MAP_HOST             _UxGT("Esporta per Host")
#define MSG_UBL_OUTPUT_MAP_CSV              _UxGT("Esporta in CSV")
#define MSG_UBL_OUTPUT_MAP_BACKUP           _UxGT("Backup esterno")
#define MSG_UBL_INFO_UBL                    _UxGT("Esporta Info UBL")
#define MSG_EDIT_MESH                       _UxGT("Modifica Mesh")
#define MSG_UBL_FILLIN_AMOUNT               _UxGT("Riempimento")
#define MSG_UBL_MANUAL_FILLIN               _UxGT("Riempimento Manuale")
#define MSG_UBL_SMART_FILLIN                _UxGT("Riempimento Smart")
#define MSG_UBL_FILLIN_MESH                 _UxGT("Riempimento Mesh")
#define MSG_UBL_INVALIDATE_ALL              _UxGT("Invalida Tutto")
#define MSG_UBL_INVALIDATE_CLOSEST          _UxGT("Invalid.Punto Vicino")
#define MSG_UBL_FINE_TUNE_ALL               _UxGT("Ritocca All")
#define MSG_UBL_FINE_TUNE_CLOSEST           _UxGT("Ritocca Punto Vicino")
#define MSG_UBL_STORAGE_MESH_MENU           _UxGT("Mesh Salvate")
#define MSG_UBL_STORAGE_SLOT                _UxGT("Slot di memoria")
#define MSG_UBL_LOAD_MESH                   _UxGT("Carica Mesh Piatto")
#define MSG_UBL_SAVE_MESH                   _UxGT("Salva Mesh Piatto")
#define MSG_MESH_LOADED                     _UxGT("Mesh %i caricata")
#define MSG_MESH_SAVED                      _UxGT("Mesh %i salvata")
#define MSG_NO_STORAGE                      _UxGT("Nessuna memoria")
#define MSG_UBL_SAVE_ERROR                  _UxGT("Err: Salvataggio UBL")
#define MSG_UBL_RESTORE_ERROR               _UxGT("Err: Ripristino UBL")
#define MSG_UBL_Z_OFFSET_STOPPED            _UxGT("Z-Offset Fermato")
#define MSG_UBL_STEP_BY_STEP_MENU           _UxGT("UBL passo passo")

#define MSG_LED_CONTROL                     _UxGT("Controllo LED")
#define MSG_LEDS                            _UxGT("Luci")
#define MSG_LED_PRESETS                     _UxGT("Preset luce")
#define MSG_SET_LEDS_RED                    _UxGT("Rosso")
#define MSG_SET_LEDS_ORANGE                 _UxGT("Arancione")
#define MSG_SET_LEDS_YELLOW                 _UxGT("Giallo")
#define MSG_SET_LEDS_GREEN                  _UxGT("Verde")
#define MSG_SET_LEDS_BLUE                   _UxGT("Blu")
#define MSG_SET_LEDS_INDIGO                 _UxGT("Indaco")
#define MSG_SET_LEDS_VIOLET                 _UxGT("Viola")
#define MSG_SET_LEDS_WHITE                  _UxGT("Bianco")
#define MSG_SET_LEDS_DEFAULT                _UxGT("Predefinito")
#define MSG_CUSTOM_LEDS                     _UxGT("Luci personalizzate")
#define MSG_INTENSITY_R                     _UxGT("Intensità rosso")
#define MSG_INTENSITY_G                     _UxGT("Intensità verde")
#define MSG_INTENSITY_B                     _UxGT("Intensità blu")
#define MSG_INTENSITY_W                     _UxGT("Intensità bianco")
#define MSG_LED_BRIGHTNESS                  _UxGT("Luminosità")

#define MSG_MOVING                          _UxGT("In movimento...")
#define MSG_FREE_XY                         _UxGT("XY liberi")
#define MSG_MOVE_X                          _UxGT("Muovi X")
#define MSG_MOVE_Y                          _UxGT("Muovi Y")
#define MSG_MOVE_Z                          _UxGT("Muovi Z")
#define MSG_MOVE_E                          _UxGT("Estrusore")
#define MSG_HOTEND_TOO_COLD                 _UxGT("Ugello freddo")
#define MSG_MOVE_01MM                       _UxGT("Muovi di 0.1mm")
#define MSG_MOVE_1MM                        _UxGT("Muovi di 1mm")
#define MSG_MOVE_10MM                       _UxGT("Muovi di 10mm")
#define MSG_SPEED                           _UxGT("Velocità")
#define MSG_BED_Z                           _UxGT("Piatto Z")
#define MSG_NOZZLE                          _UxGT("Ugello")
#define MSG_BED                             _UxGT("Piatto")
#define MSG_CHAMBER                         _UxGT("Camera")
#define MSG_FAN_SPEED                       _UxGT("Velocità ventola")
#define MSG_EXTRA_FAN_SPEED                 _UxGT("Extra vel. ventola")
#define MSG_FLOW                            _UxGT("Flusso")
#define MSG_CONTROL                         _UxGT("Controllo")
#define MSG_MIN                             LCD_STR_THERMOMETER _UxGT(" Min")
#define MSG_MAX                             LCD_STR_THERMOMETER _UxGT(" Max")
#define MSG_FACTOR                          LCD_STR_THERMOMETER _UxGT(" Fact")
#define MSG_AUTOTEMP                        _UxGT("Autotemp")
#define MSG_LCD_ON                          _UxGT("On")
#define MSG_LCD_OFF                         _UxGT("Off")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("Seleziona")
#define MSG_ACC                             _UxGT("Accel")
#define MSG_JERK                            _UxGT("Jerk")
#if IS_KINEMATIC
  #define MSG_VA_JERK                       _UxGT("Va-jerk")
  #define MSG_VB_JERK                       _UxGT("Vb-jerk")
  #define MSG_VC_JERK                       _UxGT("Vc-jerk")
#else
  #define MSG_VA_JERK                       _UxGT("Vx-jerk")
  #define MSG_VB_JERK                       _UxGT("Vy-jerk")
  #define MSG_VC_JERK                       _UxGT("Vz-jerk")
#endif
#define MSG_VE_JERK                         _UxGT("Ve-jerk")
#define MSG_JUNCTION_DEVIATION              _UxGT("Deviaz. giunzioni")
#define MSG_VELOCITY                        _UxGT("Velocità")
#define MSG_VMAX                            _UxGT("Vmax ")
#define MSG_VMIN                            _UxGT("Vmin")
#define MSG_VTRAV_MIN                       _UxGT("VTrav min")
#define MSG_ACCELERATION                    _UxGT("Accelerazione")
#define MSG_AMAX                            _UxGT("Amax ")
#define MSG_A_RETRACT                       _UxGT("A-Ritrazione")
#define MSG_A_TRAVEL                        _UxGT("A-Spostamento")
#define MSG_STEPS_PER_MM                    _UxGT("Passi/mm")
#if IS_KINEMATIC
  #define MSG_ASTEPS                        _UxGT("Apassi/mm")
  #define MSG_BSTEPS                        _UxGT("Bpassi/mm")
  #define MSG_CSTEPS                        _UxGT("Cpassi/mm")
#else
  #define MSG_ASTEPS                        _UxGT("Xpassi/mm")
  #define MSG_BSTEPS                        _UxGT("Ypassi/mm")
  #define MSG_CSTEPS                        _UxGT("Zpassi/mm")
#endif
#define MSG_ESTEPS                          _UxGT("Epassi/mm")
#define MSG_E1STEPS                         _UxGT("E1passi/mm")
#define MSG_E2STEPS                         _UxGT("E2passi/mm")
#define MSG_E3STEPS                         _UxGT("E3passi/mm")
#define MSG_E4STEPS                         _UxGT("E4passi/mm")
#define MSG_E5STEPS                         _UxGT("E5passi/mm")
#define MSG_E6STEPS                         _UxGT("E6passi/mm")
#define MSG_TEMPERATURE                     _UxGT("Temperatura")
#define MSG_MOTION                          _UxGT("Movimento")
#define MSG_FILAMENT                        _UxGT("Filamento")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E in mm³")
#define MSG_FILAMENT_DIAM                   _UxGT("Diam. filo")
#define MSG_FILAMENT_UNLOAD                 _UxGT("Rimuovi mm")
#define MSG_FILAMENT_LOAD                   _UxGT("Carica mm")
#define MSG_ADVANCE_K                       _UxGT("K Avanzamento")
#define MSG_CONTRAST                        _UxGT("Contrasto LCD")
#define MSG_STORE_EEPROM                    _UxGT("Salva impostazioni")
#define MSG_LOAD_EEPROM                     _UxGT("Carica impostazioni")
#define MSG_RESTORE_FAILSAFE                _UxGT("Ripristina imp.")
#define MSG_INIT_EEPROM                     _UxGT("Inizializza EEPROM")
#define MSG_SD_UPDATE                       _UxGT("Aggiorna SD")
#define MSG_RESET_PRINTER                   _UxGT("Resetta stampante")
#define MSG_REFRESH                         _UxGT("Aggiorna")
#define MSG_WATCH                           _UxGT("Schermata info")
#define MSG_PREPARE                         _UxGT("Prepara")
#define MSG_TUNE                            _UxGT("Regola")
#define MSG_START_PRINT                     _UxGT("Avvia stampa")
#define MSG_BUTTON_NEXT                     _UxGT("Prossimo")
#define MSG_BUTTON_INIT                     _UxGT("Inizializza")
#define MSG_BUTTON_STOP                     _UxGT("Stop")
#define MSG_BUTTON_PRINT                    _UxGT("Stampa")
#define MSG_BUTTON_RESET                    _UxGT("Resetta")
#define MSG_BUTTON_CANCEL                   _UxGT("Annulla")
#define MSG_BUTTON_DONE                     _UxGT("Fatto")
#define MSG_PAUSE_PRINT                     _UxGT("Pausa stampa")
#define MSG_RESUME_PRINT                    _UxGT("Riprendi stampa")
#define MSG_STOP_PRINT                      _UxGT("Arresta stampa")
#define MSG_OUTAGE_RECOVERY                 _UxGT("Ripresa da PowerLoss")
#define MSG_CARD_MENU                       _UxGT("Stampa da SD")
#define MSG_NO_CARD                         _UxGT("SD non presente")
#define MSG_DWELL                           _UxGT("Sospensione...")
#define MSG_USERWAIT                        _UxGT("Premi tasto..")
#define MSG_PRINT_PAUSED                    _UxGT("Stampa sospesa")
#define MSG_PRINTING                        _UxGT("Stampa...")
#define MSG_PRINT_ABORTED                   _UxGT("Stampa annullata")
#define MSG_NO_MOVE                         _UxGT("Nessun Movimento")
#define MSG_KILLED                          _UxGT("UCCISO. ")
#define MSG_STOPPED                         _UxGT("ARRESTATO. ")
#define MSG_CONTROL_RETRACT                 _UxGT("Ritrai mm")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Scamb. Ritrai mm")
#define MSG_CONTROL_RETRACTF                _UxGT("Ritrai  V")
#define MSG_CONTROL_RETRACT_ZHOP            _UxGT("Salta mm")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("Scamb. UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("UnRet V")
#define MSG_CONTROL_RETRACT_RECOVER_SWAPF   _UxGT("S UnRet V")
#define MSG_AUTORETRACT                     _UxGT("AutoRitrai")
#define MSG_FILAMENT_SWAP_LENGTH            _UxGT("Dist. ritrazione")
#define MSG_TOOL_CHANGE                     _UxGT("Cambio utensile")
#define MSG_TOOL_CHANGE_ZLIFT               _UxGT("Risalita Z")
#define MSG_SINGLENOZZLE_PRIME_SPD          _UxGT("Velocità innesco")
#define MSG_SINGLENOZZLE_RETRACT_SPD        _UxGT("Velocità retrazione")
#define MSG_NOZZLE_STANDBY                  _UxGT("Standby ugello")
#define MSG_FILAMENTCHANGE                  _UxGT("Cambia filamento")
#define MSG_FILAMENTLOAD                    _UxGT("Carica filamento")
#define MSG_FILAMENTUNLOAD                  _UxGT("Rimuovi filamento")
#define MSG_FILAMENTUNLOAD_ALL              _UxGT("Rimuovi tutto")
#define MSG_INIT_SDCARD                     _UxGT("Iniz. SD-Card")
#define MSG_CHANGE_SDCARD                   _UxGT("Cambia SD-Card")
#define MSG_ZPROBE_OUT                      _UxGT("Z probe fuori piatto")
#define MSG_SKEW_FACTOR                     _UxGT("Fattore distorsione")
#define MSG_BLTOUCH                         _UxGT("BLTouch")
#define MSG_BLTOUCH_SELFTEST                _UxGT("Autotest BLTouch")
#define MSG_BLTOUCH_RESET                   _UxGT("Resetta BLTouch")
#define MSG_BLTOUCH_DEPLOY                  _UxGT("Estendi BLTouch")
#define MSG_BLTOUCH_SW_MODE                 _UxGT("BLTouch modo SW")
#define MSG_BLTOUCH_5V_MODE                 _UxGT("BLTouch modo 5V")
#define MSG_BLTOUCH_OD_MODE                 _UxGT("BLTouch modo OD")
#define MSG_BLTOUCH_STOW                    _UxGT("Ritrai BLTouch")
#define MSG_MANUAL_DEPLOY                   _UxGT("Estendi Sonda-Z")
#define MSG_MANUAL_STOW                     _UxGT("Ritrai Sonda-Z")
#define MSG_HOME                            _UxGT("Home")  // Usato come MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("prima")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Offset sonda Z")
#define MSG_BABYSTEP_X                      _UxGT("Babystep X")
#define MSG_BABYSTEP_Y                      _UxGT("Babystep Y")
#define MSG_BABYSTEP_Z                      _UxGT("Babystep Z")
#define MSG_BABYSTEP_TOTAL                  _UxGT("Totali")
#define MSG_ENDSTOP_ABORT                   _UxGT("Finecorsa annullati")
#define MSG_HEATING_FAILED_LCD              _UxGT("Riscald. Fallito")
#define MSG_HEATING_FAILED_LCD_BED          _UxGT("Risc. piatto fallito")
#define MSG_HEATING_FAILED_LCD_CHAMBER      _UxGT("Risc. camera fallito")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("Err: TEMP RIDONDANTE")
#define MSG_THERMAL_RUNAWAY                 _UxGT("TEMP FUORI CONTROLLO")
#define MSG_THERMAL_RUNAWAY_BED             _UxGT("TEMP PIAT.FUORI CTRL")
#define MSG_THERMAL_RUNAWAY_CHAMBER         _UxGT("T.CAMERA FUORI CTRL")
#define MSG_ERR_MAXTEMP                     _UxGT("Err: TEMP MASSIMA")
#define MSG_ERR_MINTEMP                     _UxGT("Err: TEMP MINIMA")
#define MSG_ERR_MAXTEMP_BED                 _UxGT("Err: TEMP MAX PIATTO")
#define MSG_ERR_MINTEMP_BED                 _UxGT("Err: TEMP MIN PIATTO")
#define MSG_ERR_MAXTEMP_CHAMBER             _UxGT("Err: TEMP MAX CAMERA")
#define MSG_ERR_MINTEMP_CHAMBER             _UxGT("Err: TEMP MIN CAMERA")
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST
#define MSG_HALTED                          _UxGT("STAMPANTE FERMATA")
#define MSG_PLEASE_RESET                    _UxGT("Riavviare prego")
#define MSG_SHORT_DAY                       _UxGT("g") // Un solo carattere
#define MSG_SHORT_HOUR                      _UxGT("h") // Un solo carattere
#define MSG_SHORT_MINUTE                    _UxGT("m") // Un solo carattere
#define MSG_HEATING                         _UxGT("Riscaldamento...")
#define MSG_COOLING                         _UxGT("Raffreddamento..")
#define MSG_BED_HEATING                     _UxGT("Risc. piatto...")
#define MSG_BED_COOLING                     _UxGT("Raffr. piatto...")
#define MSG_DELTA_CALIBRATE                 _UxGT("Calibraz. Delta")
#define MSG_DELTA_CALIBRATE_X               _UxGT("Calibra X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Calibra Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Calibra Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Calibra centro")
#define MSG_DELTA_SETTINGS                  _UxGT("Impostaz. Delta")
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Auto calibrazione")
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Imp. altezza Delta")
#define MSG_DELTA_Z_OFFSET_CALIBRATE        _UxGT("Offset sonda-Z")
#define MSG_DELTA_DIAG_ROD                  _UxGT("Barra Diagonale")
#define MSG_DELTA_HEIGHT                    _UxGT("Altezza")
#define MSG_DELTA_RADIUS                    _UxGT("Raggio")
#define MSG_INFO_MENU                       _UxGT("Riguardo stampante")
#define MSG_INFO_PRINTER_MENU               _UxGT("Info. stampante")
#define MSG_3POINT_LEVELING                 _UxGT("Livel. a 3 punti")
#define MSG_LINEAR_LEVELING                 _UxGT("Livel. Lineare")
#define MSG_BILINEAR_LEVELING               _UxGT("Livel. Bilineare")
#define MSG_UBL_LEVELING                    _UxGT("Livel.piatto unific.")
#define MSG_MESH_LEVELING                   _UxGT("Livel. Mesh")
#define MSG_INFO_STATS_MENU                 _UxGT("Statistiche")
#define MSG_INFO_BOARD_MENU                 _UxGT("Info. scheda")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Termistori")
#define MSG_INFO_EXTRUDERS                  _UxGT("Estrusori")
#define MSG_INFO_BAUDRATE                   _UxGT("Baud")
#define MSG_INFO_PROTOCOL                   _UxGT("Protocollo")
#define MSG_CASE_LIGHT                      _UxGT("Luci Case")
#define MSG_CASE_LIGHT_BRIGHTNESS           _UxGT("Luminosità Luci")
#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("Contat. stampa")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Completati")
  #define MSG_INFO_PRINT_TIME               _UxGT("Tempo totale")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Lavoro più lungo")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Totale estruso")
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("Stampe")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Completati")
  #define MSG_INFO_PRINT_TIME               _UxGT("Durata")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Più lungo")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Estruso")
#endif
#define MSG_INFO_MIN_TEMP                   _UxGT("Temp min")
#define MSG_INFO_MAX_TEMP                   _UxGT("Temp max")
#define MSG_INFO_PSU                        _UxGT("Alimentatore")
#define MSG_DRIVE_STRENGTH                  _UxGT("Potenza Drive")
#define MSG_DAC_PERCENT                     _UxGT("Driver %")
#define MSG_DAC_EEPROM_WRITE                _UxGT("Scrivi DAC EEPROM")
#define MSG_FILAMENT_CHANGE_HEADER_PAUSE    _UxGT("STAMPA IN PAUSA")
#define MSG_FILAMENT_CHANGE_HEADER_LOAD     _UxGT("CARICA FILAMENTO")
#define MSG_FILAMENT_CHANGE_HEADER_UNLOAD   _UxGT("RIMUOVI FILAMENTO")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("OPZIONI RIPRESA:")
#define MSG_FILAMENT_CHANGE_OPTION_PURGE    _UxGT("Spurga di più")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Riprendi stampa")
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Ugello: ")
#define MSG_RUNOUT_SENSOR                   _UxGT("Sens.filo terminato")
#define MSG_ERR_HOMING_FAILED               _UxGT("Home fallito")
#define MSG_ERR_PROBING_FAILED              _UxGT("Sondaggio fallito")
#define MSG_M600_TOO_COLD                   _UxGT("M600:Troppo freddo")

#define MSG_MMU2_FILAMENT_CHANGE_HEADER     _UxGT("CAMBIO FILAMENTO")
#define MSG_MMU2_CHOOSE_FILAMENT_HEADER     _UxGT("SCELTA FILAMENTO")
#define MSG_MMU2_MENU                       _UxGT("MMU")
#define MSG_MMU2_WRONG_FIRMWARE             _UxGT("Agg.firmware MMU!")
#define MSG_MMU2_NOT_RESPONDING             _UxGT("MMU needs attention.")
#define MSG_MMU2_RESUME                     _UxGT("Riprendi stampa")
#define MSG_MMU2_RESUMING                   _UxGT("Ripresa...")
#define MSG_MMU2_LOAD_FILAMENT              _UxGT("Carica filamento")
#define MSG_MMU2_LOAD_ALL                   _UxGT("Carica tutto")
#define MSG_MMU2_LOAD_TO_NOZZLE             _UxGT("Load to nozzle")
#define MSG_MMU2_EJECT_FILAMENT             _UxGT("Espelli filamento")
#define MSG_MMU2_EJECT_FILAMENT0            _UxGT("Espelli filam.1")
#define MSG_MMU2_EJECT_FILAMENT1            _UxGT("Espelli filam.2")
#define MSG_MMU2_EJECT_FILAMENT2            _UxGT("Espelli filam.3")
#define MSG_MMU2_EJECT_FILAMENT3            _UxGT("Espelli filam.4")
#define MSG_MMU2_EJECT_FILAMENT4            _UxGT("Espelli filam.5")
#define MSG_MMU2_UNLOAD_FILAMENT            _UxGT("Scarica filamento")
#define MSG_MMU2_LOADING_FILAMENT           _UxGT("Caric.fil. %i...")
#define MSG_MMU2_EJECTING_FILAMENT          _UxGT("Esplus.filam. ...")
#define MSG_MMU2_UNLOADING_FILAMENT         _UxGT("Scaric.filam. ...")
#define MSG_MMU2_ALL                        _UxGT("Tutto")
#define MSG_MMU2_FILAMENT0                  _UxGT("Filamento 1")
#define MSG_MMU2_FILAMENT1                  _UxGT("Filamento 2")
#define MSG_MMU2_FILAMENT2                  _UxGT("Filamento 3")
#define MSG_MMU2_FILAMENT3                  _UxGT("Filamento 4")
#define MSG_MMU2_FILAMENT4                  _UxGT("Filamento 5")
#define MSG_MMU2_RESET                      _UxGT("Azzera MMU")
#define MSG_MMU2_RESETTING                  _UxGT("Azzeramento MMU...")
#define MSG_MMU2_EJECT_RECOVER              _UxGT("Rimuovi, click")

#define MSG_MIX                             _UxGT("Miscela")
#define MSG_MIX_COMPONENT                   _UxGT("Componente")
#define MSG_MIXER                           _UxGT("Miscelatore")
#define MSG_GRADIENT                        _UxGT("Gradiente")
#define MSG_FULL_GRADIENT                   _UxGT("Gradiente pieno")
#define MSG_TOGGLE_MIX                      _UxGT("Alterna miscela")
#define MSG_CYCLE_MIX                       _UxGT("Ciclo miscela")
#define MSG_GRADIENT_MIX                    _UxGT("Miscela gradiente")
#define MSG_REVERSE_GRADIENT                _UxGT("Inverti gradiente")
#define MSG_ACTIVE_VTOOL                    _UxGT("V-tool attivo")
#define MSG_START_VTOOL                     _UxGT("V-tool iniziale")
#define MSG_END_VTOOL                       _UxGT("V-tool finale")
#define MSG_GRADIENT_ALIAS                  _UxGT("V-tool alias")
#define MSG_RESET_VTOOLS                    _UxGT("Ripristina V-tools")
#define MSG_COMMIT_VTOOL                    _UxGT("Commit mix V-tool")
#define MSG_VTOOLS_RESET                    _UxGT("V-tools ripristin.")
#define MSG_START_Z                         _UxGT("Z inizio")
#define MSG_END_Z                           _UxGT("Z fine")
#define MSG_BRICKOUT                        _UxGT("Brickout")
#define MSG_INVADERS                        _UxGT("Invaders")
#define MSG_SNAKE                           _UxGT("Sn4k3")
#define MSG_MAZE                            _UxGT("Maze")

//
// Le schermate di Cambio Filamento possono visualizzare fino a 3 linee su un display a 4 righe
//                                                  ...o fino a 2 linee su un display a 3 righe.
#if LCD_HEIGHT >= 4
  #define MSG_ADVANCED_PAUSE_WAITING_1      _UxGT("Premi per")
  #define MSG_ADVANCED_PAUSE_WAITING_2      _UxGT("riprendere")
  #define MSG_ADVANCED_PAUSE_WAITING_3      _UxGT("la stampa")
  #define MSG_PAUSE_PRINT_INIT_1            _UxGT("Parcheggiando...")
  #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("Attendere avvio")
  #define MSG_FILAMENT_CHANGE_INIT_2        _UxGT("del cambio")
  #define MSG_FILAMENT_CHANGE_INIT_3        _UxGT("di filamento")
  #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("Inserisci il")
  #define MSG_FILAMENT_CHANGE_INSERT_2      _UxGT("filamento e premi")
  #define MSG_FILAMENT_CHANGE_INSERT_3      _UxGT("per continuare")
  #define MSG_FILAMENT_CHANGE_HEAT_1        _UxGT("Premi per")
  #define MSG_FILAMENT_CHANGE_HEAT_2        _UxGT("riscaldare ugello")
  #define MSG_FILAMENT_CHANGE_HEATING_1     _UxGT("Riscaldam. ugello")
  #define MSG_FILAMENT_CHANGE_HEATING_2     _UxGT("Attendere prego...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("Attendere")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2      _UxGT("l'espulsione")
  #define MSG_FILAMENT_CHANGE_UNLOAD_3      _UxGT("del filamento")
  #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("Attendere")
  #define MSG_FILAMENT_CHANGE_LOAD_2        _UxGT("il caricamento")
  #define MSG_FILAMENT_CHANGE_LOAD_3        _UxGT("del filamento")
  #define MSG_FILAMENT_CHANGE_PURGE_1       _UxGT("Attendere")
  #define MSG_FILAMENT_CHANGE_PURGE_2       _UxGT("lo spurgo")
  #define MSG_FILAMENT_CHANGE_PURGE_3       _UxGT("del filamento")
  #define MSG_FILAMENT_CHANGE_CONT_PURGE_1  _UxGT("Premi x terminare")
  #define MSG_FILAMENT_CHANGE_CONT_PURGE_2  _UxGT("lo spurgo")
  #define MSG_FILAMENT_CHANGE_CONT_PURGE_3  _UxGT("del filamento")
  #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("Attendere")
  #define MSG_FILAMENT_CHANGE_RESUME_2      _UxGT("la ripresa")
  #define MSG_FILAMENT_CHANGE_RESUME_3      _UxGT("della stampa...")
#else // LCD_HEIGHT < 4
  #define MSG_ADVANCED_PAUSE_WAITING_1      _UxGT("Premi x continuare")
  #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("Attendere...")
  #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("Inserisci e premi")
  #define MSG_FILAMENT_CHANGE_HEAT_1        _UxGT("Riscalda ugello")
  #define MSG_FILAMENT_CHANGE_HEATING_1     _UxGT("Riscaldamento...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("Espulsione...")
  #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("Caricamento...")
  #define MSG_FILAMENT_CHANGE_PURGE_1       _UxGT("Spurgo filamento")
  #define MSG_FILAMENT_CHANGE_CONT_PURGE_1  _UxGT("Premi x terminare")
  #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("Ripresa...")
#endif // LCD_HEIGHT < 4

#define MSG_TMC_DRIVERS                     _UxGT("Drivers TMC")
#define MSG_TMC_CURRENT                     _UxGT("Driver in uso")
#define MSG_TMC_HYBRID_THRS                 _UxGT("Soglia modo ibrido")
#define MSG_TMC_HOMING_THRS                 _UxGT("Azzer. sensorless")
#define MSG_TMC_STEPPING_MODE               _UxGT("Modo stepping")
#define MSG_TMC_STEALTH_ENABLED             _UxGT("StealthChop abil.")

#define MSG_SERVICE_RESET                   _UxGT("Resetta")
#define MSG_SERVICE_IN                      _UxGT(" tra:")

#define MSG_BACKLASH                        _UxGT("Gioco")
#define MSG_BACKLASH_CORRECTION             _UxGT("Correzione")
#define MSG_BACKLASH_SMOOTHING              _UxGT("Smoothing")
