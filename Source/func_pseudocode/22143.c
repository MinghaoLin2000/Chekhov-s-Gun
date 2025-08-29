__ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS7_EE
void __cdecl std::vector<std::string>::__swap_out_circular_buffer(
        std::vector<std::string> *this,
        std::__split_buffer<std::string> *__v)
{
  std::string *v4; // x1
  std::string *begin; // x8
  std::string *end; // x8
  std::string *value; // x8

  std::__uninitialized_allocator_move_if_noexcept[abi:ne180100]<std::allocator<std::string>,std::reverse_iterator<std::string*>,std::reverse_iterator<std::string*>,std::reverse_iterator<std::string*>>(
    &this->__end_cap_,
    this->__end_,
    this->__end_,
    this->__begin_,
    this->__begin_,
    __v->__begin_,
    __v->__begin_);
  __v->__begin_ = v4;
  begin = this->__begin_;
  this->__begin_ = v4;
  __v->__begin_ = begin;
  end = this->__end_;
  this->__end_ = __v->__end_;
  __v->__end_ = end;
  value = this->__end_cap_.__value_;
  this->__end_cap_.__value_ = __v->__end_cap_.__value_;
  __v->__end_cap_.__value_ = value;
  __v->__first_ = __v->__begin_;
}