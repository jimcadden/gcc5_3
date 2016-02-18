
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_event_InputEvent__
#define __java_awt_event_InputEvent__

#pragma interface

#include <java/awt/event/ComponentEvent.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
      namespace event
      {
          class InputEvent;
      }
    }
  }
}

class java::awt::event::InputEvent : public ::java::awt::event::ComponentEvent
{

public: // actually package-private
  InputEvent(::java::awt::Component *, jint, jlong, jint);
public:
  virtual jboolean isShiftDown();
  virtual jboolean isControlDown();
  virtual jboolean isMetaDown();
  virtual jboolean isAltDown();
  virtual jboolean isAltGraphDown();
  virtual jlong getWhen();
  virtual jint getModifiers();
  virtual jint getModifiersEx();
  virtual void consume();
  virtual jboolean isConsumed();
  static ::java::lang::String * getModifiersExText(jint);
private:
  static const jlong serialVersionUID = -2482525981698309786LL;
public:
  static const jint SHIFT_MASK = 1;
  static const jint CTRL_MASK = 2;
  static const jint META_MASK = 4;
  static const jint ALT_MASK = 8;
  static const jint ALT_GRAPH_MASK = 32;
  static const jint BUTTON1_MASK = 16;
  static const jint BUTTON2_MASK = 8;
  static const jint BUTTON3_MASK = 4;
  static const jint SHIFT_DOWN_MASK = 64;
  static const jint CTRL_DOWN_MASK = 128;
  static const jint META_DOWN_MASK = 256;
  static const jint ALT_DOWN_MASK = 512;
  static const jint BUTTON1_DOWN_MASK = 1024;
  static const jint BUTTON2_DOWN_MASK = 2048;
  static const jint BUTTON3_DOWN_MASK = 4096;
  static const jint ALT_GRAPH_DOWN_MASK = 8192;
public: // actually package-private
  static const jint CONVERT_MASK = 10176;
private:
  jlong __attribute__((aligned(__alignof__( ::java::awt::event::ComponentEvent)))) when;
public: // actually package-private
  jint modifiers;
  jint modifiersEx;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_event_InputEvent__
