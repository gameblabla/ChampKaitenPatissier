#include <stdio.h>
#include <stdlib.h>

#include <SDL.h>
#include "define.h"
#include "extern.h"
#include "scene.h"

#include "title.h"
#include "act.h"
#include "option.h"
#include "ending.h"
#include "logo.h"
#include "stageselect.h"
#include "demo.h"

void scenemanager( void );

void scenemanager( void )
{
	int exit;
	
	exit = true;
	while( exit )
	{
		printf("g_scene %d\n", g_scene);
		switch( g_scene )
		{
		case EN_SN_TITLE:
			title_main( );
			break;
		case EN_SN_ACT:
			act_main( );
			break;
		case EN_SN_OPTION:
			option_main( );
			break;
		case EN_SN_ENDING:
			ending_main( );
			break;
		case EN_SN_LOGO:
			logo_main( );
			break;
		case EN_SN_STAGESELECT:
			stageselect_main( );
			break;
		case EN_SN_DEMO:
			demo_main( );
			break;
		default:
			exit = false;
			break;
		}
	}

}


