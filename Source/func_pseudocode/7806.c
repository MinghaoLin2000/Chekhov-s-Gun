_$s16EyeCandyGraphics9CGDisplayV5imageySo10CGImageRefaSgSo6CGRectVF
// attributes: thunk
CGImageRef __cdecl CGDisplay.image(_:)(CGDirectDisplayID display, CGRect rect)
{
  return CGDisplayCreateImageForRect(display, rect);
}