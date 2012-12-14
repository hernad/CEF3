// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/ctocpp/render_handler_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

bool CefRenderHandlerCToCpp::GetRootScreenRect(CefRefPtr<CefBrowser> browser,
    CefRect& rect) {
  if (CEF_MEMBER_MISSING(struct_, get_root_screen_rect))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;

  // Execute
  int _retval = struct_->get_root_screen_rect(struct_,
      CefBrowserCppToC::Wrap(browser),
      &rect);

  // Return type: bool
  return _retval?true:false;
}

bool CefRenderHandlerCToCpp::GetViewRect(CefRefPtr<CefBrowser> browser,
    CefRect& rect) {
  if (CEF_MEMBER_MISSING(struct_, get_view_rect))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;

  // Execute
  int _retval = struct_->get_view_rect(struct_,
      CefBrowserCppToC::Wrap(browser),
      &rect);

  // Return type: bool
  return _retval?true:false;
}

bool CefRenderHandlerCToCpp::GetScreenPoint(CefRefPtr<CefBrowser> browser,
    int viewX, int viewY, int& screenX, int& screenY) {
  if (CEF_MEMBER_MISSING(struct_, get_screen_point))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;

  // Execute
  int _retval = struct_->get_screen_point(struct_,
      CefBrowserCppToC::Wrap(browser),
      viewX,
      viewY,
      &screenX,
      &screenY);

  // Return type: bool
  return _retval?true:false;
}

void CefRenderHandlerCToCpp::OnPopupShow(CefRefPtr<CefBrowser> browser,
    bool show) {
  if (CEF_MEMBER_MISSING(struct_, on_popup_show))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;

  // Execute
  struct_->on_popup_show(struct_,
      CefBrowserCppToC::Wrap(browser),
      show);
}

void CefRenderHandlerCToCpp::OnPopupSize(CefRefPtr<CefBrowser> browser,
    const CefRect& rect) {
  if (CEF_MEMBER_MISSING(struct_, on_popup_size))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;

  // Execute
  struct_->on_popup_size(struct_,
      CefBrowserCppToC::Wrap(browser),
      &rect);
}

void CefRenderHandlerCToCpp::OnPaint(CefRefPtr<CefBrowser> browser,
    PaintElementType type, const RectList& dirtyRects, const void* buffer,
    int width, int height) {
  if (CEF_MEMBER_MISSING(struct_, on_paint))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;
  // Verify param: buffer; type: simple_byaddr
  DCHECK(buffer);
  if (!buffer)
    return;

  // Translate param: dirtyRects; type: simple_vec_byref_const
  const size_t dirtyRectsCount = dirtyRects.size();
  cef_rect_t* dirtyRectsList = NULL;
  if (dirtyRectsCount > 0) {
    dirtyRectsList = new cef_rect_t[dirtyRectsCount];
    DCHECK(dirtyRectsList);
    if (dirtyRectsList) {
      for (size_t i = 0; i < dirtyRectsCount; ++i) {
        dirtyRectsList[i] = dirtyRects[i];
      }
    }
  }

  // Execute
  struct_->on_paint(struct_,
      CefBrowserCppToC::Wrap(browser),
      type,
      dirtyRectsCount,
      dirtyRectsList,
      buffer,
      width,
      height);

  // Restore param:dirtyRects; type: simple_vec_byref_const
  if (dirtyRectsList)
    delete [] dirtyRectsList;
}

void CefRenderHandlerCToCpp::OnCursorChange(CefRefPtr<CefBrowser> browser,
    CefCursorHandle cursor) {
  if (CEF_MEMBER_MISSING(struct_, on_cursor_change))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;

  // Execute
  struct_->on_cursor_change(struct_,
      CefBrowserCppToC::Wrap(browser),
      cursor);
}


#ifndef NDEBUG
template<> long CefCToCpp<CefRenderHandlerCToCpp, CefRenderHandler,
    cef_render_handler_t>::DebugObjCt = 0;
#endif

