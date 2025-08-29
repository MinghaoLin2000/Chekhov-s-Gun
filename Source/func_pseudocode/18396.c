_IOConnectCallScalarMethod
kern_return_t __cdecl IOConnectCallScalarMethod(
        mach_port_t connection,
        uint32_t selector,
        const uint64_t *input,
        uint32_t inputCnt,
        uint64_t *output,
        uint32_t *outputCnt)
{
  return _IOConnectCallScalarMethod(connection, selector, input, inputCnt, output, outputCnt);
}