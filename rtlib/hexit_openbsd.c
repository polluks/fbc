/* end helper for OpenBSD */

#include "fb.h"

/*:::::*/
void fb_hEnd ( int unused )
{
	fb_unix_hEnd( unused );
}