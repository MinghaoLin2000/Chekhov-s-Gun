_CGEventTapCreate
CFMachPortRef __cdecl CGEventTapCreate(
        CGEventTapLocation tap,
        CGEventTapPlacement place,
        CGEventTapOptions options,
        CGEventMask eventsOfInterest,
        CGEventTapCallBack callback,
        void *userInfo)
{
  return _CGEventTapCreate(tap, place, options, eventsOfInterest, callback, userInfo);
}