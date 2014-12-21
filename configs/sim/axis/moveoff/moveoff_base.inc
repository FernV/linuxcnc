[DISPLAY]
                DISPLAY = axis
             CYCLE_TIME = 0.100
              HELP_FILE = doc/help.txt
        POSITION_OFFSET = RELATIVE
      POSITION_FEEDBACK = ACTUAL
      MAX_FEED_OVERRIDE = 1.2
   MAX_SPINDLE_OVERRIDE = 1.0
    MAX_LINEAR_VELOCITY = 5
DEFAULT_LINEAR_VELOCITY = .25
  DEFAULT_SPINDLE_SPEED = 200
         PROGRAM_PREFIX = ../../nc_files/
          INTRO_GRAPHIC = linuxcnc.gif
             INTRO_TIME = 5
                 EDITOR = gedit
            TOOL_EDITOR = tooledit
             INCREMENTS = 1 in, 0.1 in, 10 mil, 1 mil, 1mm, .1mm, 1/8000 in

[FILTER]
PROGRAM_EXTENSION = .png,.gif,.jpg Grayscale Depth Image
PROGRAM_EXTENSION = .py Python Script
              png = image-to-gcode
              gif = image-to-gcode
              jpg = image-to-gcode
               py = python

[TASK]
      TASK = milltask
CYCLE_TIME = 0.001

[RS274NGC]
PARAMETER_FILE = sim.var

[EMCMOT]
      EMCMOT = motmod
COMM_TIMEOUT = 1.0
   COMM_WAIT = 0.010
 BASE_PERIOD = 0
SERVO_PERIOD = 1000000

[TRAJ]
    NO_FORCE_HOMING = 1
               AXES = 3
        COORDINATES = X Y Z
               HOME = 0 0 0
       LINEAR_UNITS = inch
      ANGULAR_UNITS = degree
         CYCLE_TIME = 0.010
   DEFAULT_VELOCITY = 5
      POSITION_FILE = position.txt
MAX_LINEAR_VELOCITY = 5

[EMCIO]
               EMCIO = io
          CYCLE_TIME = 0.100
          TOOL_TABLE = sim.tbl
TOOL_CHANGE_POSITION = 0 0 0
TOOL_CHANGE_QUILL_UP = 1

[AXIS_0]
OFFSET_MAX_ACCELERATION =  60.0
    OFFSET_MAX_VELOCITY =   6.0
       OFFSET_MAX_LIMIT =  10.0
       OFFSET_MIN_LIMIT = -10.0

                   TYPE = LINEAR
                   HOME = 0.000
           MAX_VELOCITY = 5
       MAX_ACCELERATION = 50.0
               BACKLASH = 0.000
            INPUT_SCALE = 4000
           OUTPUT_SCALE = 1.000
              MIN_LIMIT = -40.0
              MAX_LIMIT = 40.0
                 FERROR = 0.050
             MIN_FERROR = 0.010
            HOME_OFFSET = 0.0
        HOME_SEARCH_VEL = 20.0
         HOME_LATCH_VEL = 20.0
         HOME_USE_INDEX = NO
     HOME_IGNORE_LIMITS = NO
          HOME_SEQUENCE = 1
         HOME_IS_SHARED = 1

[AXIS_1]
OFFSET_MAX_ACCELERATION =  60.0
    OFFSET_MAX_VELOCITY =   6.0
       OFFSET_MAX_LIMIT =  10.0
       OFFSET_MIN_LIMIT = -10.0

                   TYPE = LINEAR
                   HOME = 0.000
           MAX_VELOCITY = 5
       MAX_ACCELERATION = 50.0
               BACKLASH = 0.000
            INPUT_SCALE = 4000
           OUTPUT_SCALE = 1.000
              MIN_LIMIT = -40.0
              MAX_LIMIT = 40.0
                 FERROR = 0.050
             MIN_FERROR = 0.010
            HOME_OFFSET = 0.0
        HOME_SEARCH_VEL = 20.0
         HOME_LATCH_VEL = 20.0
         HOME_USE_INDEX = NO
     HOME_IGNORE_LIMITS = NO
          HOME_SEQUENCE = 1

[AXIS_2]
OFFSET_MAX_ACCELERATION =  60.0
    OFFSET_MAX_VELOCITY =   6.0
       OFFSET_MAX_LIMIT =  10.0
       OFFSET_MIN_LIMIT = -10.0

                   TYPE = LINEAR
                   HOME = 0.0
           MAX_VELOCITY = 5
       MAX_ACCELERATION = 50.0
               BACKLASH = 0.000
            INPUT_SCALE = 4000
           OUTPUT_SCALE = 1.000
              MIN_LIMIT = -8.0
              MAX_LIMIT = 0.12
                 FERROR = 0.050
             MIN_FERROR = 0.010
            HOME_OFFSET = 1.0
        HOME_SEARCH_VEL = 20.0
         HOME_LATCH_VEL = 20.0
         HOME_USE_INDEX = NO
     HOME_IGNORE_LIMITS = NO
          HOME_SEQUENCE = 0
         HOME_IS_SHARED = 1
