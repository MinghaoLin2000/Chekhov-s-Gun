_compression_stream_init
compression_status __cdecl compression_stream_init(
        compression_stream *stream,
        compression_stream_operation operation,
        compression_algorithm algorithm)
{
  return _compression_stream_init(stream, operation, algorithm);
}