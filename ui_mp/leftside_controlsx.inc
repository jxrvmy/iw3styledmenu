blurWorld		7.0

#undef BACK_OPEN
#define BACK_OPEN exec "wait";

#include "ui_mp/navcontrols.inc"

#undef ORIGIN_TITLE
#define ORIGIN_TITLE 64 0
CHOICE_MENU_TITLE( "@MENU_CONTROLS" )

#undef CHOICE_X_START
#define CHOICE_X_START		-324

#undef CHOICE_HORIZONTAL_ALIGN
#define CHOICE_HORIZONTAL_ALIGN HORIZONTAL_ALIGN_CENTER

#undef CHOICE_VERTICAL_ALIGN
#define CHOICE_VERTICAL_ALIGN VERTICAL_ALIGN_TOP

//CHOICE_SECTION_TITLE( 1, "@MENU_CONTROLS" )
CHOICE_BUTTON( 2, "@MENU_LOOK", LOCAL_CLOSE_ALL open "pc_options_look"; )
CHOICE_BUTTON( 3, "@MENU_MOVE", LOCAL_CLOSE_ALL open "pc_options_movement"; )
CHOICE_BUTTON( 4, "@MENU_COMBAT", LOCAL_CLOSE_ALL open "pc_options_actions"; )
CHOICE_BUTTON( 5, "@MENU_INTERACT", LOCAL_CLOSE_ALL open "pc_options_controls"; )
CHOICE_BUTTON_VIS( 6, "@MENU_MULTIPLAYER_CONTROLS", LOCAL_CLOSE_ALL open "controls_multi";, when( dvarint( "ui_multiplayer" ) ) )
CHOICE_DBUTTON_VIS( 6, "@MENU_MULTIPLAYER_CONTROLS", when( !dvarint( "ui_multiplayer" ) ); )
CHOICE_BUTTON( 7, "@MENU_SET_DEFAULT_CONTROLS", LOCAL_CLOSE_ALL open "options_control_defaults"; )		

// ---

#undef	CHOICE_SIZE_X
#define CHOICE_SIZE_X		180

#undef  SECTION_X_OFFSET
#define SECTION_X_OFFSET 	60

// ---