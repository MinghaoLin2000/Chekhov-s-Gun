-[iAUPServer setBootloaderEntry]
void __cdecl -[iAUPServer setBootloaderEntry](iAUPServer *self, SEL a2)
{
  -[iAUPServer sendCommand:payload:payload_length:](self, "sendCommand:payload:payload_length:", 64LL, 0LL, 0LL);
}