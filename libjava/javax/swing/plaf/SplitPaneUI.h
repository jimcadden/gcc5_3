
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_SplitPaneUI__
#define __javax_swing_plaf_SplitPaneUI__

#pragma interface

#include <javax/swing/plaf/ComponentUI.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Graphics;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class JSplitPane;
      namespace plaf
      {
          class SplitPaneUI;
      }
    }
  }
}

class javax::swing::plaf::SplitPaneUI : public ::javax::swing::plaf::ComponentUI
{

public:
  SplitPaneUI();
  virtual void resetToPreferredSizes(::javax::swing::JSplitPane *) = 0;
  virtual void setDividerLocation(::javax::swing::JSplitPane *, jint) = 0;
  virtual jint getDividerLocation(::javax::swing::JSplitPane *) = 0;
  virtual jint getMinimumDividerLocation(::javax::swing::JSplitPane *) = 0;
  virtual jint getMaximumDividerLocation(::javax::swing::JSplitPane *) = 0;
  virtual void finishedPaintingChildren(::javax::swing::JSplitPane *, ::java::awt::Graphics *) = 0;
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_SplitPaneUI__