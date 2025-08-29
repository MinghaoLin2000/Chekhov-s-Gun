___47-[WACEAService reconfigureAccessory:withReply:]_block_invoke.7
void *__fastcall __47__WACEAService_reconfigureAccessory_withReply___block_invoke_7(__int64 a1)
{
  void *result; // x0

  do
    result = objc_msgSend(*(id *)(a1 + 32), "accessoryReprovisionState");
  while ( result );
  return result;
}