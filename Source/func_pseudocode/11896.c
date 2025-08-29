__ZN6google8protobuf8internal13DestroyStringEPKv
void __fastcall google::protobuf::internal::DestroyString(void **this, const void *a2)
{
  if ( *((char *)this + 23) < 0 )
    operator delete(*this);
}