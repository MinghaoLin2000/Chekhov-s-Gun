_compression_decode_buffer
size_t __cdecl compression_decode_buffer(
        uint8_t *dst_buffer,
        size_t dst_size,
        const uint8_t *src_buffer,
        size_t src_size,
        void *scratch_buffer,
        compression_algorithm algorithm)
{
  return _compression_decode_buffer(dst_buffer, dst_size, src_buffer, src_size, scratch_buffer, algorithm);
}