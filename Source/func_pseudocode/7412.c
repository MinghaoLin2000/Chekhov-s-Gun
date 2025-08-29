_$s13DisplayMarkup0B8DelegateC8completeyyF
Swift::Void __swiftcall MarkupDelegate.complete()()
{
  __int64 v0; // x20

  if ( NSApp )
    objc_msgSend(NSApp, "terminate:", v0);
  else
    __break(1u);
}