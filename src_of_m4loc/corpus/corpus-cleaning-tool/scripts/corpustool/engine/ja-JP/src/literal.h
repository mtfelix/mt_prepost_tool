/*
 * $Id: literal.h,v 1.2 2007/03/25 13:24:39 kazuma-t Exp $
 */

enum cha_lit_str {
    STR_BOS, STR_EOS, STR_BOS_EOS, STR_BASE_FORM_STR1, STR_BASE_FORM_STR2, 
    STR_BASE_FORM1, STR_BASE_FORM2, STR_DEF_POS_COST, STR_MRPH, STR_POS, 
    STR_WORD, STR_READING, STR_BASE, STR_PRON, STR_CTYPE, STR_CFORM, 
    STR_INFO1, STR_INFO2, STR_COMPOUND, STR_SEG, STR_CONN_ATTR, 
    STR_ENCODE,
    STR_GRAM_FILE, STR_UNKNOWN_WORD, STR_UNKNOWN_WORD1, STR_UNKNOWN_WORD2,
    STR_UNKNOWN_POS1, STR_UNKNOWN_POS2,
    STR_SPACE_POS, STR_ANNOTATION, STR_POS_COST, 
    STR_CONN_WEIGHT, STR_MRPH_WEIGHT, STR_COST_WIDTH, STR_DEF_CONN_COST, 
    STR_COMPOSIT_POS, STR_OUTPUT_COMPOUND, STR_DA_FILE, STR_OUTPUT_FORMAT, 
    STR_LANG, STR_DELIMITER, STR_BOS_STR, STR_EOS_STR,
};

/* for encoding scheme */
enum cha_encode {
    CHASEN_ENCODE_EUCJP,
    CHASEN_ENCODE_SJIS,
    CHASEN_ENCODE_ISO8859,
    CHASEN_ENCODE_UTF8
};

void cha_set_encode(char*);
int cha_litmatch(const char *, int, ...);

extern enum cha_encode Cha_encode;
extern char *cha_literal[][3];

#define CHA_LIT(s) cha_literal[s][2]
#define CHA_LITE(s) cha_literal[s][1]
