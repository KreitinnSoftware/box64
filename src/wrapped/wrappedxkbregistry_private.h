#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif
//typedef uint32_t xkb_keycode_t

//GO(rxkb_context_get_log_level, 
//GO(rxkb_context_get_user_data, 
//GO(rxkb_context_include_path_append, 
//GO(rxkb_context_include_path_append_default, 
GO(rxkb_context_new, pFu)
//GO(rxkb_context_parse, 
GO(rxkb_context_parse_default_ruleset, uFp)
//GO(rxkb_context_ref, 
//GO(rxkb_context_set_log_fn, 
//GO(rxkb_context_set_log_level, 
//GO(rxkb_context_set_user_data, 
GO(rxkb_context_unref, pFp)
//GO(rxkb_iso3166_code_get_code, 
//GO(rxkb_iso3166_code_next, 
//GO(rxkb_iso3166_code_ref, 
//GO(rxkb_iso3166_code_unref, 
//GO(rxkb_iso639_code_get_code, 
//GO(rxkb_iso639_code_next, 
//GO(rxkb_iso639_code_ref, 
//GO(rxkb_iso639_code_unref, 
GO(rxkb_layout_first, pFp)
//GO(rxkb_layout_get_brief, 
GO(rxkb_layout_get_description, pFp)
//GO(rxkb_layout_get_iso3166_first, 
//GO(rxkb_layout_get_iso639_first, 
GO(rxkb_layout_get_name, pFp)
//GO(rxkb_layout_get_popularity, 
GO(rxkb_layout_get_variant, pFp)
GO(rxkb_layout_next, pFp)
//GO(rxkb_layout_ref, 
//GO(rxkb_layout_unref, 
//GO(rxkb_model_first, 
//GO(rxkb_model_get_description, 
//GO(rxkb_model_get_name, 
//GO(rxkb_model_get_popularity, 
//GO(rxkb_model_get_vendor, 
//GO(rxkb_model_next, 
//GO(rxkb_model_ref, 
//GO(rxkb_model_unref, 
//GO(rxkb_option_first, 
//GO(rxkb_option_get_brief, 
//GO(rxkb_option_get_description, 
//GO(rxkb_option_get_name, 
//GO(rxkb_option_get_popularity, 
//GO(rxkb_option_group_allows_multiple, 
//GO(rxkb_option_group_first, 
//GO(rxkb_option_group_get_description, 
//GO(rxkb_option_group_get_name, 
//GO(rxkb_option_group_get_popularity, 
//GO(rxkb_option_group_next, 
//GO(rxkb_option_group_ref, 
//GO(rxkb_option_group_unref, 
//GO(rxkb_option_next, 
//GO(rxkb_option_ref, 
//GO(rxkb_option_unref, 
