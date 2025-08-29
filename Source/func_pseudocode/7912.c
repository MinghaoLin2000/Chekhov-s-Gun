_CGGetDisplaysWithRect
CGError __cdecl CGGetDisplaysWithRect(
        CGRect rect,
        uint32_t maxDisplays,
        CGDirectDisplayID *displays,
        uint32_t *matchingDisplayCount)
{
  return _CGGetDisplaysWithRect(rect, maxDisplays, displays, matchingDisplayCount);
}