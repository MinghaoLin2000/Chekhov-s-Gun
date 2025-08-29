_SecCodeCopyGuestWithAttributes
OSStatus __cdecl SecCodeCopyGuestWithAttributes(
        SecCodeRef host,
        CFDictionaryRef attributes,
        SecCSFlags flags,
        SecCodeRef *guest)
{
  return _SecCodeCopyGuestWithAttributes(host, attributes, flags, guest);
}