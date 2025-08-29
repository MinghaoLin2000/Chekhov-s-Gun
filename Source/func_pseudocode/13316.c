-[TSURangeList .cxx_construct]
id __cdecl -[TSURangeList .cxx_construct](id self, SEL a2)
{
  *((_QWORD *)self + 1) = 0LL;
  *((_QWORD *)self + 2) = 0LL;
  *((_QWORD *)self + 3) = 0LL;
  return self;
}