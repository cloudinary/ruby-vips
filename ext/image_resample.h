VALUE img_affinei(int, VALUE*, VALUE);
VALUE img_affinei_resize(int, VALUE*, VALUE);
VALUE img_stretch3(int, VALUE*, VALUE);
VALUE img_shrink(int, VALUE*, VALUE);
#if ATLEAST_VIPS( 8, 0 )
VALUE img_resize(VALUE, VALUE, VALUE);
#endif
VALUE img_rightshift_size(VALUE, VALUE, VALUE, VALUE);
VALUE img_match_linear(VALUE, VALUE, VALUE, VALUE, VALUE, VALUE, VALUE, VALUE,
	VALUE, VALUE);
VALUE img_match_linear_search(VALUE, VALUE, VALUE, VALUE, VALUE, VALUE, VALUE,
	VALUE, VALUE, VALUE, VALUE, VALUE);
