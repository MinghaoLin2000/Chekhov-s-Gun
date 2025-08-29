___47-[WACEAService reconfigureAccessory:withReply:]_block_invoke
void __fastcall __47__WACEAService_reconfigureAccessory_withReply___block_invoke(_QWORD *a1, void *a2)
{
  id location[2]; // [xsp+20h] [xbp-10h] BYREF

  location[1] = a1;
  location[0] = 0LL;
  objc_storeStrong(location, a2);
  (*(void (**)(void))(a1[4] + 16LL))();
  objc_storeStrong(location, 0LL);
}