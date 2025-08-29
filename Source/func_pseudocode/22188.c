_SecCodeCheckValidityWithErrors
OSStatus __cdecl SecCodeCheckValidityWithErrors(
        SecCodeRef code,
        SecCSFlags flags,
        SecRequirementRef requirement,
        CFErrorRef *errors)
{
  return _SecCodeCheckValidityWithErrors(code, flags, requirement, errors);
}