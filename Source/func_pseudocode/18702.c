$s17ControlCenterCore16MenuFlashStepperVwCP
__n128 __fastcall initializeBufferWithCopyOfBuffer for MenuFlashStepper(__n128 *a1, __n128 *a2)
{
  __n128 result; // q0

  result = *a2;
  a1[1].n128_u8[0] = a2[1].n128_u8[0];
  *a1 = result;
  return result;
}