#include "types.h"
#include "stat.h"
#include "user.h"

// Funtion to call getreadcount from xv6 terminal
int
main(int argc, char *argv[]){
// If any argument is passed, call resetreadcount
	if (argc > 1){
		resetreadcount();
	} else {
// If no arguments, call getreadcount
		getreadcount();
	}
	exit();
}
