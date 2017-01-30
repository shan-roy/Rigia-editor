/*
 * This is free and unencumbered software released into the public domain.
 * 
 * Anyone is free to copy, modify, publish, use, compile, sell, or
 * distribute this software, either in source code form or as a compiled
 * binary, for any purpose, commercial or non-commercial, and by any
 * means.
 * 
 * In jurisdictions that recognize copyright laws, the author or authors
 * of this software dedicate any and all copyright interest in the
 * software to the public domain. We make this dedication for the benefit
 * of the public at large and to the detriment of our heirs and
 * successors. We intend this dedication to be an overt act of
 * relinquishment in perpetuity of all present and future rights to this
 * software under copyright law.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 * 
 * For more information, please refer to <http://unlicense.org>
 */

/*
 * main.cc
 *
 * This is the entry point for the 'Rigia-editor' program.
 * This module invokes the 'editor' module and everything later is taken care by that module.
 */

#include "io.h"
#include "file_manip.h"
#include "exceptions.h"
#include "editor.h"

/* Main	*/
int main(int argc, char *argv[]) {
	
	//TODO... After the implementation of editing multiple files in different tabs, the below if() condition will be removed and only the
	//init_system(); line will be present.
	
	printf("\t\t--- Welcome to Rigia-editor ---\n");
	
	// Create and set-up editor
	Editor editor;
	editor.init_active_files(argc-1, argv+1); //Since 0th argv is the command's name itself
	editor.start();
	
	return 0;
}

