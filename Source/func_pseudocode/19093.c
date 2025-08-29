_CreateEventWithCGEvent
OSStatus __cdecl CreateEventWithCGEvent(
        CFAllocatorRef inAllocator,
        CGEventRef inEvent,
        EventAttributes inAttributes,
        EventRef *outEvent)
{
  return _CreateEventWithCGEvent(inAllocator, inEvent, inAttributes, outEvent);
}