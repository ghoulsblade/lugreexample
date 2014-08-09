/*
http://www.opensource.org/licenses/mit-license.php  (MIT-License)

Copyright (c) 2007 Lugre-Team

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
#ifndef LUGRE_Rectangle_H
#define LUGRE_Rectangle_H

#include <OgreCommon.h>

// Ogre1.9 replaced Ogre::Rectangle by Ogre::TRect<T> in OgreCommon.h

namespace Lugre {

/*
class Rectangle { public:
	float left;
	float top;
	float right;
	float bottom;
	inline Rectangle () { left=top=right=bottom=0.0; }
	TODO: intersect, but found Ogre::TRect
};
*/
typedef Ogre::TRect<Ogre::Real> Rectangle;

};

#endif