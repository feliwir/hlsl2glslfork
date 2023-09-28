/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 7 "hlslang/MachineIndependent/hlslang.y"


/* Based on:
ANSI C Yacc grammar

In 1985, Jeff Lee published his Yacc grammar (which is accompanied by a 
matching Lex specification) for the April 30, 1985 draft version of the 
ANSI C standard.  Tom Stockfisch reposted it to net.sources in 1987; that
original, as mentioned in the answer to question 17.25 of the comp.lang.c
FAQ, can be ftp'ed from ftp.uu.net, file usenet/net.sources/ansi.c.grammar.Z.
 
I intend to keep this version as close to the current C Standard grammar as 
possible; please let me know if you discover discrepancies. 

Jutta Degener, 1995 
*/

#include "SymbolTable.h"
#include "ParseHelper.h"
#include "../../include/hlsl2glsl.h"

extern void yyerror(TParseContext&, const char*);

#define FRAG_ONLY(S, L) {                                                       \
    if (parseContext.language != EShLangFragment) {                             \
        parseContext.error(L, " supported in fragment shaders only ", S, "", "");          \
        parseContext.recover();                                                            \
    }                                                                           \
}

#define NONSQUARE_MATRIX_CHECK(S, L) { \
	if (parseContext.targetVersion < ETargetGLSL_120) { \
		parseContext.error(L, " not supported in pre-GLSL1.20", S, "", ""); \
		parseContext.recover(); \
	} \
}

#define UNSUPPORTED_FEATURE(S, L) {                                                       \
    parseContext.error(L, " not supported ", S, "", "");              \
    parseContext.recover();                                                            \
}

#define SET_BASIC_TYPE(RES,PAR,T,PREC) \
	TQualifier qual = parseContext.getDefaultQualifier(); \
	(RES).setBasic(T, qual, (PAR).line); \
	(RES).precision = PREC



#line 121 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "hlslang_tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CONST_QUAL = 3,                 /* CONST_QUAL  */
  YYSYMBOL_STATIC_QUAL = 4,                /* STATIC_QUAL  */
  YYSYMBOL_BOOL_TYPE = 5,                  /* BOOL_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 6,                 /* FLOAT_TYPE  */
  YYSYMBOL_INT_TYPE = 7,                   /* INT_TYPE  */
  YYSYMBOL_STRING_TYPE = 8,                /* STRING_TYPE  */
  YYSYMBOL_FIXED_TYPE = 9,                 /* FIXED_TYPE  */
  YYSYMBOL_HALF_TYPE = 10,                 /* HALF_TYPE  */
  YYSYMBOL_BREAK = 11,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 12,                  /* CONTINUE  */
  YYSYMBOL_DO = 13,                        /* DO  */
  YYSYMBOL_ELSE = 14,                      /* ELSE  */
  YYSYMBOL_FOR = 15,                       /* FOR  */
  YYSYMBOL_IF = 16,                        /* IF  */
  YYSYMBOL_DISCARD = 17,                   /* DISCARD  */
  YYSYMBOL_RETURN = 18,                    /* RETURN  */
  YYSYMBOL_BVEC2 = 19,                     /* BVEC2  */
  YYSYMBOL_BVEC3 = 20,                     /* BVEC3  */
  YYSYMBOL_BVEC4 = 21,                     /* BVEC4  */
  YYSYMBOL_IVEC2 = 22,                     /* IVEC2  */
  YYSYMBOL_IVEC3 = 23,                     /* IVEC3  */
  YYSYMBOL_IVEC4 = 24,                     /* IVEC4  */
  YYSYMBOL_VEC2 = 25,                      /* VEC2  */
  YYSYMBOL_VEC3 = 26,                      /* VEC3  */
  YYSYMBOL_VEC4 = 27,                      /* VEC4  */
  YYSYMBOL_HVEC2 = 28,                     /* HVEC2  */
  YYSYMBOL_HVEC3 = 29,                     /* HVEC3  */
  YYSYMBOL_HVEC4 = 30,                     /* HVEC4  */
  YYSYMBOL_FVEC2 = 31,                     /* FVEC2  */
  YYSYMBOL_FVEC3 = 32,                     /* FVEC3  */
  YYSYMBOL_FVEC4 = 33,                     /* FVEC4  */
  YYSYMBOL_MATRIX2x2 = 34,                 /* MATRIX2x2  */
  YYSYMBOL_MATRIX2x3 = 35,                 /* MATRIX2x3  */
  YYSYMBOL_MATRIX2x4 = 36,                 /* MATRIX2x4  */
  YYSYMBOL_MATRIX3x2 = 37,                 /* MATRIX3x2  */
  YYSYMBOL_MATRIX3x3 = 38,                 /* MATRIX3x3  */
  YYSYMBOL_MATRIX3x4 = 39,                 /* MATRIX3x4  */
  YYSYMBOL_MATRIX4x2 = 40,                 /* MATRIX4x2  */
  YYSYMBOL_MATRIX4x3 = 41,                 /* MATRIX4x3  */
  YYSYMBOL_MATRIX4x4 = 42,                 /* MATRIX4x4  */
  YYSYMBOL_HMATRIX2x2 = 43,                /* HMATRIX2x2  */
  YYSYMBOL_HMATRIX2x3 = 44,                /* HMATRIX2x3  */
  YYSYMBOL_HMATRIX2x4 = 45,                /* HMATRIX2x4  */
  YYSYMBOL_HMATRIX3x2 = 46,                /* HMATRIX3x2  */
  YYSYMBOL_HMATRIX3x3 = 47,                /* HMATRIX3x3  */
  YYSYMBOL_HMATRIX3x4 = 48,                /* HMATRIX3x4  */
  YYSYMBOL_HMATRIX4x2 = 49,                /* HMATRIX4x2  */
  YYSYMBOL_HMATRIX4x3 = 50,                /* HMATRIX4x3  */
  YYSYMBOL_HMATRIX4x4 = 51,                /* HMATRIX4x4  */
  YYSYMBOL_FMATRIX2x2 = 52,                /* FMATRIX2x2  */
  YYSYMBOL_FMATRIX2x3 = 53,                /* FMATRIX2x3  */
  YYSYMBOL_FMATRIX2x4 = 54,                /* FMATRIX2x4  */
  YYSYMBOL_FMATRIX3x2 = 55,                /* FMATRIX3x2  */
  YYSYMBOL_FMATRIX3x3 = 56,                /* FMATRIX3x3  */
  YYSYMBOL_FMATRIX3x4 = 57,                /* FMATRIX3x4  */
  YYSYMBOL_FMATRIX4x2 = 58,                /* FMATRIX4x2  */
  YYSYMBOL_FMATRIX4x3 = 59,                /* FMATRIX4x3  */
  YYSYMBOL_FMATRIX4x4 = 60,                /* FMATRIX4x4  */
  YYSYMBOL_IN_QUAL = 61,                   /* IN_QUAL  */
  YYSYMBOL_OUT_QUAL = 62,                  /* OUT_QUAL  */
  YYSYMBOL_INOUT_QUAL = 63,                /* INOUT_QUAL  */
  YYSYMBOL_UNIFORM = 64,                   /* UNIFORM  */
  YYSYMBOL_STRUCT = 65,                    /* STRUCT  */
  YYSYMBOL_VOID_TYPE = 66,                 /* VOID_TYPE  */
  YYSYMBOL_WHILE = 67,                     /* WHILE  */
  YYSYMBOL_SAMPLER1D = 68,                 /* SAMPLER1D  */
  YYSYMBOL_SAMPLER2D = 69,                 /* SAMPLER2D  */
  YYSYMBOL_SAMPLER3D = 70,                 /* SAMPLER3D  */
  YYSYMBOL_SAMPLERCUBE = 71,               /* SAMPLERCUBE  */
  YYSYMBOL_SAMPLER1DSHADOW = 72,           /* SAMPLER1DSHADOW  */
  YYSYMBOL_SAMPLER2DSHADOW = 73,           /* SAMPLER2DSHADOW  */
  YYSYMBOL_SAMPLER2DARRAY = 74,            /* SAMPLER2DARRAY  */
  YYSYMBOL_SAMPLERRECTSHADOW = 75,         /* SAMPLERRECTSHADOW  */
  YYSYMBOL_SAMPLERRECT = 76,               /* SAMPLERRECT  */
  YYSYMBOL_SAMPLER2D_HALF = 77,            /* SAMPLER2D_HALF  */
  YYSYMBOL_SAMPLER2D_FLOAT = 78,           /* SAMPLER2D_FLOAT  */
  YYSYMBOL_SAMPLERCUBE_HALF = 79,          /* SAMPLERCUBE_HALF  */
  YYSYMBOL_SAMPLERCUBE_FLOAT = 80,         /* SAMPLERCUBE_FLOAT  */
  YYSYMBOL_SAMPLERGENERIC = 81,            /* SAMPLERGENERIC  */
  YYSYMBOL_VECTOR = 82,                    /* VECTOR  */
  YYSYMBOL_MATRIX = 83,                    /* MATRIX  */
  YYSYMBOL_REGISTER = 84,                  /* REGISTER  */
  YYSYMBOL_TEXTURE = 85,                   /* TEXTURE  */
  YYSYMBOL_SAMPLERSTATE = 86,              /* SAMPLERSTATE  */
  YYSYMBOL_IDENTIFIER = 87,                /* IDENTIFIER  */
  YYSYMBOL_TYPE_NAME = 88,                 /* TYPE_NAME  */
  YYSYMBOL_FLOATCONSTANT = 89,             /* FLOATCONSTANT  */
  YYSYMBOL_INTCONSTANT = 90,               /* INTCONSTANT  */
  YYSYMBOL_BOOLCONSTANT = 91,              /* BOOLCONSTANT  */
  YYSYMBOL_STRINGCONSTANT = 92,            /* STRINGCONSTANT  */
  YYSYMBOL_FIELD_SELECTION = 93,           /* FIELD_SELECTION  */
  YYSYMBOL_LEFT_OP = 94,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 95,                  /* RIGHT_OP  */
  YYSYMBOL_INC_OP = 96,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 97,                    /* DEC_OP  */
  YYSYMBOL_LE_OP = 98,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 99,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 100,                    /* EQ_OP  */
  YYSYMBOL_NE_OP = 101,                    /* NE_OP  */
  YYSYMBOL_AND_OP = 102,                   /* AND_OP  */
  YYSYMBOL_OR_OP = 103,                    /* OR_OP  */
  YYSYMBOL_XOR_OP = 104,                   /* XOR_OP  */
  YYSYMBOL_MUL_ASSIGN = 105,               /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 106,               /* DIV_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 107,               /* ADD_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 108,               /* MOD_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 109,              /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 110,             /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 111,               /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 112,               /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 113,                /* OR_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 114,               /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_PAREN = 115,               /* LEFT_PAREN  */
  YYSYMBOL_RIGHT_PAREN = 116,              /* RIGHT_PAREN  */
  YYSYMBOL_LEFT_BRACKET = 117,             /* LEFT_BRACKET  */
  YYSYMBOL_RIGHT_BRACKET = 118,            /* RIGHT_BRACKET  */
  YYSYMBOL_LEFT_BRACE = 119,               /* LEFT_BRACE  */
  YYSYMBOL_RIGHT_BRACE = 120,              /* RIGHT_BRACE  */
  YYSYMBOL_DOT = 121,                      /* DOT  */
  YYSYMBOL_COMMA = 122,                    /* COMMA  */
  YYSYMBOL_COLON = 123,                    /* COLON  */
  YYSYMBOL_EQUAL = 124,                    /* EQUAL  */
  YYSYMBOL_SEMICOLON = 125,                /* SEMICOLON  */
  YYSYMBOL_BANG = 126,                     /* BANG  */
  YYSYMBOL_DASH = 127,                     /* DASH  */
  YYSYMBOL_TILDE = 128,                    /* TILDE  */
  YYSYMBOL_PLUS = 129,                     /* PLUS  */
  YYSYMBOL_STAR = 130,                     /* STAR  */
  YYSYMBOL_SLASH = 131,                    /* SLASH  */
  YYSYMBOL_PERCENT = 132,                  /* PERCENT  */
  YYSYMBOL_LEFT_ANGLE = 133,               /* LEFT_ANGLE  */
  YYSYMBOL_RIGHT_ANGLE = 134,              /* RIGHT_ANGLE  */
  YYSYMBOL_VERTICAL_BAR = 135,             /* VERTICAL_BAR  */
  YYSYMBOL_CARET = 136,                    /* CARET  */
  YYSYMBOL_AMPERSAND = 137,                /* AMPERSAND  */
  YYSYMBOL_QUESTION = 138,                 /* QUESTION  */
  YYSYMBOL_YYACCEPT = 139,                 /* $accept  */
  YYSYMBOL_variable_identifier = 140,      /* variable_identifier  */
  YYSYMBOL_primary_expression = 141,       /* primary_expression  */
  YYSYMBOL_postfix_expression = 142,       /* postfix_expression  */
  YYSYMBOL_int_expression = 143,           /* int_expression  */
  YYSYMBOL_function_call = 144,            /* function_call  */
  YYSYMBOL_function_call_or_method = 145,  /* function_call_or_method  */
  YYSYMBOL_function_call_generic = 146,    /* function_call_generic  */
  YYSYMBOL_function_call_header_no_parameters = 147, /* function_call_header_no_parameters  */
  YYSYMBOL_function_call_header_with_parameters = 148, /* function_call_header_with_parameters  */
  YYSYMBOL_function_call_header = 149,     /* function_call_header  */
  YYSYMBOL_function_identifier = 150,      /* function_identifier  */
  YYSYMBOL_unary_expression = 151,         /* unary_expression  */
  YYSYMBOL_unary_operator = 152,           /* unary_operator  */
  YYSYMBOL_mul_expression = 153,           /* mul_expression  */
  YYSYMBOL_add_expression = 154,           /* add_expression  */
  YYSYMBOL_shift_expression = 155,         /* shift_expression  */
  YYSYMBOL_rel_expression = 156,           /* rel_expression  */
  YYSYMBOL_eq_expression = 157,            /* eq_expression  */
  YYSYMBOL_and_expression = 158,           /* and_expression  */
  YYSYMBOL_xor_expression = 159,           /* xor_expression  */
  YYSYMBOL_or_expression = 160,            /* or_expression  */
  YYSYMBOL_log_and_expression = 161,       /* log_and_expression  */
  YYSYMBOL_log_xor_expression = 162,       /* log_xor_expression  */
  YYSYMBOL_log_or_expression = 163,        /* log_or_expression  */
  YYSYMBOL_cond_expression = 164,          /* cond_expression  */
  YYSYMBOL_assign_expression = 165,        /* assign_expression  */
  YYSYMBOL_assignment_operator = 166,      /* assignment_operator  */
  YYSYMBOL_expression = 167,               /* expression  */
  YYSYMBOL_const_expression = 168,         /* const_expression  */
  YYSYMBOL_declaration = 169,              /* declaration  */
  YYSYMBOL_function_prototype = 170,       /* function_prototype  */
  YYSYMBOL_function_declarator = 171,      /* function_declarator  */
  YYSYMBOL_function_header_with_parameters = 172, /* function_header_with_parameters  */
  YYSYMBOL_function_header = 173,          /* function_header  */
  YYSYMBOL_parameter_declarator = 174,     /* parameter_declarator  */
  YYSYMBOL_parameter_declaration = 175,    /* parameter_declaration  */
  YYSYMBOL_parameter_qualifier = 176,      /* parameter_qualifier  */
  YYSYMBOL_parameter_type_specifier = 177, /* parameter_type_specifier  */
  YYSYMBOL_init_declarator_list = 178,     /* init_declarator_list  */
  YYSYMBOL_single_declaration = 179,       /* single_declaration  */
  YYSYMBOL_fully_specified_type = 180,     /* fully_specified_type  */
  YYSYMBOL_type_qualifier = 181,           /* type_qualifier  */
  YYSYMBOL_type_specifier = 182,           /* type_specifier  */
  YYSYMBOL_type_specifier_nonarray = 183,  /* type_specifier_nonarray  */
  YYSYMBOL_struct_specifier = 184,         /* struct_specifier  */
  YYSYMBOL_struct_declaration_list = 185,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 186,       /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 187,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 188,        /* struct_declarator  */
  YYSYMBOL_initializer = 189,              /* initializer  */
  YYSYMBOL_declaration_statement = 190,    /* declaration_statement  */
  YYSYMBOL_statement = 191,                /* statement  */
  YYSYMBOL_simple_statement = 192,         /* simple_statement  */
  YYSYMBOL_compound_statement = 193,       /* compound_statement  */
  YYSYMBOL_194_1 = 194,                    /* $@1  */
  YYSYMBOL_195_2 = 195,                    /* $@2  */
  YYSYMBOL_statement_no_new_scope = 196,   /* statement_no_new_scope  */
  YYSYMBOL_compound_statement_no_new_scope = 197, /* compound_statement_no_new_scope  */
  YYSYMBOL_statement_list = 198,           /* statement_list  */
  YYSYMBOL_expression_statement = 199,     /* expression_statement  */
  YYSYMBOL_selection_statement = 200,      /* selection_statement  */
  YYSYMBOL_selection_rest_statement = 201, /* selection_rest_statement  */
  YYSYMBOL_condition = 202,                /* condition  */
  YYSYMBOL_iteration_statement = 203,      /* iteration_statement  */
  YYSYMBOL_204_3 = 204,                    /* $@3  */
  YYSYMBOL_205_4 = 205,                    /* $@4  */
  YYSYMBOL_206_5 = 206,                    /* $@5  */
  YYSYMBOL_for_init_statement = 207,       /* for_init_statement  */
  YYSYMBOL_conditionopt = 208,             /* conditionopt  */
  YYSYMBOL_for_rest_statement = 209,       /* for_rest_statement  */
  YYSYMBOL_jump_statement = 210,           /* jump_statement  */
  YYSYMBOL_translation_unit = 211,         /* translation_unit  */
  YYSYMBOL_external_declaration = 212,     /* external_declaration  */
  YYSYMBOL_function_definition = 213,      /* function_definition  */
  YYSYMBOL_214_6 = 214,                    /* $@6  */
  YYSYMBOL_initialization_list = 215,      /* initialization_list  */
  YYSYMBOL_initializer_list = 216,         /* initializer_list  */
  YYSYMBOL_annotation = 217,               /* annotation  */
  YYSYMBOL_annotation_list = 218,          /* annotation_list  */
  YYSYMBOL_annotation_item = 219,          /* annotation_item  */
  YYSYMBOL_ann_type = 220,                 /* ann_type  */
  YYSYMBOL_ann_literal = 221,              /* ann_literal  */
  YYSYMBOL_ann_numerical_constant = 222,   /* ann_numerical_constant  */
  YYSYMBOL_ann_literal_constructor = 223,  /* ann_literal_constructor  */
  YYSYMBOL_ann_value_list = 224,           /* ann_value_list  */
  YYSYMBOL_ann_literal_init_list = 225,    /* ann_literal_init_list  */
  YYSYMBOL_register_specifier = 226,       /* register_specifier  */
  YYSYMBOL_semantic = 227,                 /* semantic  */
  YYSYMBOL_type_info = 228,                /* type_info  */
  YYSYMBOL_sampler_initializer = 229,      /* sampler_initializer  */
  YYSYMBOL_sampler_init_list = 230,        /* sampler_init_list  */
  YYSYMBOL_sampler_init_item = 231         /* sampler_init_item  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 90 "hlslang/MachineIndependent/hlslang.y"

    extern int yylex(YYSTYPE*, TParseContext&);

#line 390 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  106
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2692

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  139
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  93
/* YYNRULES -- Number of rules.  */
#define YYNRULES  325
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  497

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   393


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   174,   174,   212,   215,   220,   225,   230,   236,   239,
     303,   306,   393,   403,   416,   430,   546,   549,   567,   571,
     578,   582,   589,   598,   610,   618,   645,   657,   667,   670,
     680,   690,   708,   743,   744,   745,   746,   752,   753,   754,
     755,   759,   760,   761,   765,   766,   767,   771,   772,   773,
     774,   775,   779,   780,   781,   785,   786,   790,   791,   795,
     796,   800,   801,   805,   806,   810,   811,   815,   816,   831,
     832,   846,   847,   848,   849,   850,   851,   852,   853,   854,
     855,   856,   860,   863,   874,   882,   883,   887,   920,   957,
     960,   967,   975,   996,  1028,  1039,  1052,  1064,  1076,  1094,
    1123,  1128,  1138,  1143,  1153,  1156,  1159,  1162,  1168,  1175,
    1178,  1196,  1220,  1248,  1275,  1308,  1342,  1345,  1363,  1386,
    1412,  1438,  1468,  1516,  1519,  1536,  1539,  1542,  1545,  1548,
    1556,  1559,  1574,  1577,  1580,  1583,  1586,  1589,  1592,  1603,
    1614,  1625,  1629,  1633,  1637,  1641,  1645,  1649,  1653,  1657,
    1661,  1665,  1669,  1673,  1677,  1681,  1685,  1689,  1694,  1699,
    1704,  1708,  1713,  1718,  1723,  1727,  1731,  1736,  1741,  1746,
    1750,  1755,  1760,  1765,  1769,  1773,  1778,  1783,  1788,  1792,
    1797,  1802,  1807,  1811,  1814,  1817,  1820,  1823,  1826,  1829,
    1832,  1835,  1838,  1841,  1844,  1847,  1850,  1853,  1856,  1860,
    1872,  1882,  1890,  1893,  1908,  1941,  1945,  1951,  1956,  1962,
    1972,  1988,  1989,  1990,  1994,  1998,  1999,  2005,  2006,  2007,
    2008,  2009,  2013,  2014,  2014,  2014,  2022,  2023,  2028,  2031,
    2039,  2042,  2048,  2049,  2053,  2061,  2065,  2075,  2080,  2097,
    2097,  2102,  2102,  2109,  2109,  2122,  2125,  2131,  2134,  2140,
    2144,  2151,  2158,  2165,  2172,  2192,  2203,  2207,  2214,  2217,
    2220,  2224,  2224,  2313,  2316,  2323,  2327,  2331,  2335,  2342,
    2346,  2352,  2356,  2363,  2369,  2370,  2371,  2372,  2373,  2374,
    2375,  2376,  2377,  2378,  2379,  2380,  2381,  2382,  2383,  2384,
    2385,  2386,  2387,  2388,  2389,  2393,  2394,  2395,  2396,  2400,
    2403,  2406,  2412,  2416,  2417,  2421,  2425,  2431,  2435,  2436,
    2437,  2438,  2439,  2440,  2441,  2442,  2446,  2451,  2456,  2457,
    2461,  2462,  2463,  2464,  2465,  2466
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CONST_QUAL",
  "STATIC_QUAL", "BOOL_TYPE", "FLOAT_TYPE", "INT_TYPE", "STRING_TYPE",
  "FIXED_TYPE", "HALF_TYPE", "BREAK", "CONTINUE", "DO", "ELSE", "FOR",
  "IF", "DISCARD", "RETURN", "BVEC2", "BVEC3", "BVEC4", "IVEC2", "IVEC3",
  "IVEC4", "VEC2", "VEC3", "VEC4", "HVEC2", "HVEC3", "HVEC4", "FVEC2",
  "FVEC3", "FVEC4", "MATRIX2x2", "MATRIX2x3", "MATRIX2x4", "MATRIX3x2",
  "MATRIX3x3", "MATRIX3x4", "MATRIX4x2", "MATRIX4x3", "MATRIX4x4",
  "HMATRIX2x2", "HMATRIX2x3", "HMATRIX2x4", "HMATRIX3x2", "HMATRIX3x3",
  "HMATRIX3x4", "HMATRIX4x2", "HMATRIX4x3", "HMATRIX4x4", "FMATRIX2x2",
  "FMATRIX2x3", "FMATRIX2x4", "FMATRIX3x2", "FMATRIX3x3", "FMATRIX3x4",
  "FMATRIX4x2", "FMATRIX4x3", "FMATRIX4x4", "IN_QUAL", "OUT_QUAL",
  "INOUT_QUAL", "UNIFORM", "STRUCT", "VOID_TYPE", "WHILE", "SAMPLER1D",
  "SAMPLER2D", "SAMPLER3D", "SAMPLERCUBE", "SAMPLER1DSHADOW",
  "SAMPLER2DSHADOW", "SAMPLER2DARRAY", "SAMPLERRECTSHADOW", "SAMPLERRECT",
  "SAMPLER2D_HALF", "SAMPLER2D_FLOAT", "SAMPLERCUBE_HALF",
  "SAMPLERCUBE_FLOAT", "SAMPLERGENERIC", "VECTOR", "MATRIX", "REGISTER",
  "TEXTURE", "SAMPLERSTATE", "IDENTIFIER", "TYPE_NAME", "FLOATCONSTANT",
  "INTCONSTANT", "BOOLCONSTANT", "STRINGCONSTANT", "FIELD_SELECTION",
  "LEFT_OP", "RIGHT_OP", "INC_OP", "DEC_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "AND_OP", "OR_OP", "XOR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "ADD_ASSIGN", "MOD_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "SUB_ASSIGN", "LEFT_PAREN", "RIGHT_PAREN",
  "LEFT_BRACKET", "RIGHT_BRACKET", "LEFT_BRACE", "RIGHT_BRACE", "DOT",
  "COMMA", "COLON", "EQUAL", "SEMICOLON", "BANG", "DASH", "TILDE", "PLUS",
  "STAR", "SLASH", "PERCENT", "LEFT_ANGLE", "RIGHT_ANGLE", "VERTICAL_BAR",
  "CARET", "AMPERSAND", "QUESTION", "$accept", "variable_identifier",
  "primary_expression", "postfix_expression", "int_expression",
  "function_call", "function_call_or_method", "function_call_generic",
  "function_call_header_no_parameters",
  "function_call_header_with_parameters", "function_call_header",
  "function_identifier", "unary_expression", "unary_operator",
  "mul_expression", "add_expression", "shift_expression", "rel_expression",
  "eq_expression", "and_expression", "xor_expression", "or_expression",
  "log_and_expression", "log_xor_expression", "log_or_expression",
  "cond_expression", "assign_expression", "assignment_operator",
  "expression", "const_expression", "declaration", "function_prototype",
  "function_declarator", "function_header_with_parameters",
  "function_header", "parameter_declarator", "parameter_declaration",
  "parameter_qualifier", "parameter_type_specifier",
  "init_declarator_list", "single_declaration", "fully_specified_type",
  "type_qualifier", "type_specifier", "type_specifier_nonarray",
  "struct_specifier", "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "initializer",
  "declaration_statement", "statement", "simple_statement",
  "compound_statement", "$@1", "$@2", "statement_no_new_scope",
  "compound_statement_no_new_scope", "statement_list",
  "expression_statement", "selection_statement",
  "selection_rest_statement", "condition", "iteration_statement", "$@3",
  "$@4", "$@5", "for_init_statement", "conditionopt", "for_rest_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "$@6", "initialization_list", "initializer_list",
  "annotation", "annotation_list", "annotation_item", "ann_type",
  "ann_literal", "ann_numerical_constant", "ann_literal_constructor",
  "ann_value_list", "ann_literal_init_list", "register_specifier",
  "semantic", "type_info", "sampler_initializer", "sampler_init_list",
  "sampler_init_item", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-387)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-90)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2208,    86,    36,  -387,  -387,  -387,  -387,  -387,  -387,  -387,
    -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,
    -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,
    -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,
    -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,
    -387,   -12,  -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,
    -387,  -387,  -387,  -387,  -387,  -387,  -387,   -14,  -387,  -387,
    -387,  -387,    32,    48,    38,    67,    11,  -387,    88,  2604,
    -387,    54,  -387,  1191,  -387,  -387,  -387,  -387,    72,  2604,
      45,  -387,    85,   118,    84,  -387,  -387,  -387,  -387,  2604,
     137,   202,  -387,    64,  -387,  1984,  -387,  -387,  2604,   207,
    2315,  -387,   174,   177,   189,   457,  -387,   225,  -387,  -387,
    -387,   227,  2604,    44,  -387,  1534,    39,     1,  -387,   182,
     -85,   192,   203,  -387,  -387,  -387,  -387,  1984,  1984,  1984,
    -387,  -387,  -387,  -387,  -387,  -387,    42,  -387,  -387,  -387,
     201,    46,  2095,   206,  -387,  1984,   115,   155,    58,   -22,
      40,   185,   187,   190,   222,   223,   -34,  -387,   208,  -387,
    2417,    57,    71,  -387,  -387,  -387,   238,   239,   240,   209,
     210,  -387,   216,   217,   215,  1648,   218,   221,  -387,  -387,
     196,  -387,  -387,    83,  -387,    32,   228,  -387,  -387,  -387,
    -387,   584,  -387,  -387,  -387,  -387,  -387,    26,  -387,  -387,
    1759,   220,   -32,   224,   230,  -387,  -387,  -387,  -387,  -387,
    -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,
    -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,    35,  -387,
     259,  -387,   263,  -387,   182,  1298,  -387,  -387,    66,   113,
    -387,  -387,  1984,  2519,  -387,  -387,  1984,   232,  -387,  -387,
    -387,  1984,  1984,  1984,  1984,  1984,  1984,  1984,  1984,  1984,
    1984,  1984,  1984,  1984,  1984,  1984,  1984,  1984,  1984,  1984,
    1984,  -387,  -387,  1984,   262,   207,  -387,   219,   226,   229,
    -387,  -387,   711,  -387,  1984,  -387,  -387,   114,  -387,  -387,
     711,  -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,
    -387,  -387,  1984,  1984,  -387,  -387,  -387,  1984,   156,  1298,
    -387,   -32,   233,  1298,   231,   -32,   265,  -387,  -387,   234,
    -387,   235,  1873,  -387,  -387,  -387,  -387,  -387,  1984,   241,
     242,  -387,   246,  -387,  -387,  -387,  -387,  -387,   115,   115,
     155,   155,    58,    58,    58,    58,   -22,   -22,    40,   185,
     187,   190,   222,   223,   136,   244,  -387,  -387,  -387,  -387,
    -387,   283,   965,    68,  -387,  1078,   711,  -387,  -387,   249,
    -387,  -387,   245,   -32,  -387,  1298,   250,   252,   247,    -3,
    -387,  -387,   122,  -387,  -387,  1984,   248,   255,  -387,  -387,
    1078,   711,   242,   269,   257,   237,   254,  1298,   256,  -387,
    1298,  -387,  -387,  -387,  -387,  -387,   160,   264,   253,  -387,
    -387,  -387,   258,   260,  -387,    31,  -387,  -387,  1409,  -387,
     278,  1984,  -387,   261,   267,   367,  -387,   266,   838,  -387,
     298,  -387,  1298,  -387,  -387,   163,   160,  -387,   -41,    -9,
    -387,  -387,  -387,  -387,  -387,  -387,    70,  1984,   838,   711,
    1298,  -387,  -387,  -387,  -387,  -387,  -387,   160,    73,   268,
     300,   301,   270,   302,   304,   271,   242,  -387,  -387,  -387,
    -387,  -387,  -387,   276,   272,  -387,   281,   273,  -387,   274,
     277,   279,   280,  -387,  -387,  -387,  -387
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   125,   126,   137,   133,   136,   135,   134,   150,   151,
     152,   153,   154,   155,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     129,     0,   132,   185,   186,   189,   190,   195,   196,   197,
     194,   193,   187,   188,   191,   192,   184,     0,   183,   199,
     260,   259,   261,     0,    90,   104,     0,   109,   116,     0,
     123,   130,   198,     0,   256,   258,   128,   127,     0,     0,
       0,    85,     0,    87,   104,   105,   106,   107,    91,     0,
     104,     0,    86,   308,   124,     0,     1,   257,     0,     0,
       0,   202,     0,     0,     0,     0,   262,     0,    92,   101,
     103,   108,     0,   308,    93,     0,     0,     0,   311,   310,
     309,   117,     2,     5,     4,     6,    27,     0,     0,     0,
      35,    34,    36,    33,     3,     8,    28,    10,    15,    16,
       0,     0,    21,     0,    37,     0,    41,    44,    47,    52,
      55,    57,    59,    61,    63,    65,    67,    84,     0,    25,
       0,   207,     0,   205,   201,   203,     0,     0,     0,     0,
       0,   241,     0,     0,     0,     0,     0,   223,   228,   232,
      37,    69,    82,     0,   214,     0,   123,   217,   230,   216,
     215,     0,   218,   219,   220,   221,    88,    94,   100,   102,
       0,   110,   308,     0,     0,   307,   278,   274,   277,   279,
     276,   275,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   269,     0,   271,
       0,   314,     0,   312,   313,     0,    29,    30,     0,   130,
      12,    13,     0,     0,    19,    18,     0,   132,    22,    24,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   131,   200,     0,     0,     0,   204,     0,     0,     0,
     252,   251,     0,   243,     0,   255,   253,     0,   239,   222,
       0,    72,    73,    75,    74,    77,    78,    79,    80,    81,
      76,    71,     0,     0,   233,   229,   231,     0,     0,     0,
      96,   308,     0,     0,   118,   308,     0,   270,   272,     0,
     315,     0,     0,   211,   122,   212,   213,     7,     0,     0,
      14,    26,    11,    17,    23,    38,    39,    40,    43,    42,
      45,    46,    50,    51,    48,    49,    53,    54,    56,    58,
      60,    62,    64,    66,     0,     0,   208,   206,   140,   138,
     139,     0,     0,     0,   254,     0,   224,    70,    83,     0,
      97,    95,   111,   308,   115,     0,   119,     0,     0,     0,
     265,   266,     0,    32,     9,     0,   209,     0,   246,   245,
     248,     0,   237,     0,     0,     0,    98,     0,   112,   120,
       0,   306,   301,   299,   300,   296,     0,     0,     0,   295,
     297,   298,     0,     0,   317,     0,   318,   263,     0,    68,
       0,     0,   247,     0,     0,   236,   234,     0,     0,   225,
       0,   113,     0,   121,   303,     0,     0,   273,     0,     0,
     316,   319,   264,   267,   268,   210,     0,   249,     0,     0,
       0,   227,   240,   226,    99,   114,   305,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   250,   244,   235,   238,
     304,   302,   323,     0,     0,   320,     0,     0,   242,     0,
       0,     0,     0,   325,   324,   322,   321
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -387,  -387,  -387,  -387,  -387,  -387,  -387,   141,  -387,  -387,
    -387,  -387,   -52,  -387,    23,    24,   -36,    25,   124,   128,
     132,   133,   131,   134,  -387,   -89,  -147,  -387,  -138,  -110,
      37,    49,  -387,  -387,  -387,   289,   318,   314,   293,  -387,
    -387,  -303,    50,     0,   282,  -387,   308,   -75,  -387,   135,
    -305,    47,  -198,  -304,  -387,  -387,  -387,   -40,   325,   123,
      52,  -387,  -387,    22,  -387,  -387,  -387,  -387,  -387,  -387,
    -387,  -387,  -387,   342,  -387,  -387,  -315,  -387,  -117,  -387,
     188,    41,  -387,  -386,  -387,   -19,  -387,  -111,  -387,  -119,
    -387,  -387,     3
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   144,   145,   146,   339,   147,   148,   149,   150,   151,
     152,   153,   190,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   191,   192,   312,   193,   168,
     194,   195,    73,    74,    75,   119,    98,    99,   120,    76,
      77,    78,    79,   169,    81,    82,   110,   111,   172,   173,
     334,   197,   198,   199,   200,   300,   405,   462,   463,   201,
     202,   203,   436,   404,   204,   375,   292,   372,   400,   433,
     434,   205,    83,    84,    85,    92,   335,   392,   128,   238,
     239,   240,   418,   444,   420,   445,   421,   129,   130,   131,
     336,   425,   426
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      80,   248,   419,   316,   211,   258,   216,   217,   218,   219,
     220,   221,   241,   243,   381,   213,   167,   391,   384,   244,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   175,   167,    71,   242,    87,
     216,   217,   218,   219,   220,   221,   469,   297,   127,    72,
     112,   113,   114,   154,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   279,
       1,     2,   403,   154,   470,    88,   268,   269,   472,   104,
     409,   480,   422,    80,   423,   246,   247,     1,     2,   109,
      86,   126,   471,   324,   371,   175,   320,   403,   333,   121,
     322,   127,   441,   260,   280,   443,   473,    89,   109,   344,
     109,   270,   271,   454,   340,   196,   422,   424,   423,    90,
      71,   167,   121,   214,   474,   100,   215,   330,    95,    96,
      97,    50,    72,   101,   461,   237,   102,   465,   250,   251,
     272,   273,   364,   317,   100,    95,    96,    97,    50,   318,
     319,   450,   266,   267,   461,   479,   373,    91,   154,   252,
      94,   210,   255,   253,    93,   377,   378,   126,   256,   327,
     109,   105,   333,   365,   283,   103,   333,   127,   316,   124,
     284,   125,   337,   -89,   401,   390,   475,   126,   313,   481,
     313,   108,   313,   285,   167,   467,   286,   127,    95,    96,
      97,   196,   382,   435,   115,   313,   386,   379,   314,   345,
     346,   347,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   167,   338,
     105,   154,   352,   353,   354,   355,   313,   402,   333,   374,
     214,   117,   427,   380,   428,   261,   262,   263,   429,   412,
     413,   414,   216,   217,   218,   219,   220,   221,   313,   395,
     333,   478,   402,   333,   408,   154,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   453,   264,   466,   265,   467,   393,   348,   349,   123,
     350,   351,   196,   456,   171,   333,   176,   356,   357,   177,
     196,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   178,   206,   333,   207,   127,   245,   254,   -26,   476,
     311,   259,   274,   275,   277,   276,   281,   278,   287,   288,
     289,   293,   294,   298,   290,   291,   412,   413,   414,   415,
     295,   299,   325,   -25,   323,   326,   329,   214,   -20,   366,
     397,   383,   387,   368,   389,   385,   437,   439,   388,   394,
     369,   -27,   396,   370,   313,   455,   416,   406,   411,   407,
     431,   430,   196,   438,   410,   196,   196,   440,   447,   446,
     442,   459,   448,   458,   449,   464,   457,   483,   484,   486,
     460,   487,   489,   482,   343,   485,   488,   491,   358,   493,
     196,   196,   494,   359,   495,   496,   490,   492,   360,   362,
     361,   208,   118,   363,   122,   209,   170,   116,   477,   398,
     367,   249,   432,   376,   399,   107,   328,   468,   451,   417,
       0,     0,     0,     0,     0,     0,     0,     0,   196,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   196,   196,
       1,     2,     3,     4,     5,     0,     6,     7,   179,   180,
     181,     0,   182,   183,   184,   185,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,     0,     0,
       0,    50,    51,    52,   186,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
       0,     0,    68,     0,   132,    69,   133,   134,   135,     0,
     136,     0,     0,   137,   138,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   139,     0,     0,     0,   187,   188,     0,     0,
       0,     0,   189,   140,   141,   142,   143,     1,     2,     3,
       4,     5,     0,     6,     7,   179,   180,   181,     0,   182,
     183,   184,   185,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,     0,     0,     0,    50,    51,
      52,   186,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,     0,     0,    68,
       0,   132,    69,   133,   134,   135,     0,   136,     0,     0,
     137,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   139,
       0,     0,     0,   187,   315,     0,     0,     0,     0,   189,
     140,   141,   142,   143,     1,     2,     3,     4,     5,     0,
       6,     7,   179,   180,   181,     0,   182,   183,   184,   185,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     0,     0,     0,    50,    51,    52,   186,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,     0,     0,    68,     0,   132,    69,
     133,   134,   135,     0,   136,     0,     0,   137,   138,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   139,     0,     0,     0,
     187,     0,     0,     0,     0,     0,   189,   140,   141,   142,
     143,     1,     2,     3,     4,     5,     0,     6,     7,   179,
     180,   181,     0,   182,   183,   184,   185,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,     0,
       0,     0,    50,    51,    52,   186,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,     0,     0,    68,     0,   132,    69,   133,   134,   135,
       0,   136,     0,     0,   137,   138,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   139,     0,     0,     0,   115,     0,     0,
       0,     0,     0,   189,   140,   141,   142,   143,     1,     2,
       3,     4,     5,     0,     6,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     0,     0,     0,    50,
      51,    52,     0,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     0,     0,
      68,     0,   132,    69,   133,   134,   135,     0,   136,     0,
       0,   137,   138,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     139,     1,     2,     3,     4,     5,     0,     6,     7,     0,
     189,   140,   141,   142,   143,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,     0,
       0,     0,    50,    51,    52,     0,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,     0,     0,    68,     0,   132,    69,   133,   134,   135,
       0,   136,     0,     0,   137,   138,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   106,     0,   139,     1,     2,     3,     4,     5,     0,
       6,     7,     0,     0,   140,   141,   142,   143,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     0,     0,     0,    50,    51,    52,     0,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,     0,     0,    68,     0,     0,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     4,     5,     0,     6,     7,     0,
       0,     0,     0,     0,     0,     0,    70,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,     0,
       0,     0,     0,    51,    52,     0,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,     0,     0,    68,   331,   132,    69,   133,   134,   135,
       0,   136,     0,     0,   137,   138,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   139,     3,     4,     5,   332,     6,     7,
       0,     0,     0,     0,   140,   141,   142,   143,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
       0,     0,     0,     0,    51,    52,     0,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,     0,     0,    68,     0,   132,    69,   133,   134,
     135,     0,   136,     0,     0,   137,   138,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   139,     0,     0,     0,   332,   452,
       0,     0,     0,     0,     0,   140,   141,   142,   143,     3,
       4,     5,     0,     6,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,     0,     0,     0,     0,    51,
      52,     0,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,     0,     0,    68,
       0,   132,    69,   133,   134,   135,     0,   136,     0,     0,
     137,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   139,
       0,     0,   212,     3,     4,     5,     0,     6,     7,     0,
     140,   141,   142,   143,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,     0,
       0,     0,     0,    51,    52,     0,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,     0,     0,    68,     0,   132,    69,   133,   134,   135,
       0,   136,     0,     0,   137,   138,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   139,     3,     4,     5,     0,     6,     7,
       0,     0,     0,   296,   140,   141,   142,   143,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
       0,     0,     0,     0,    51,    52,     0,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,     0,     0,    68,     0,   132,    69,   133,   134,
     135,     0,   136,     0,     0,   137,   138,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   139,     0,     0,   321,     3,     4,
       5,     0,     6,     7,     0,   140,   141,   142,   143,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,     0,     0,     0,     0,    51,    52,
       0,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,     0,     0,    68,     0,
     132,    69,   133,   134,   135,     0,   136,     0,     0,   137,
     138,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   139,     3,
       4,     5,   332,     6,     7,     0,     0,     0,     0,   140,
     141,   142,   143,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,     0,     0,     0,     0,    51,
      52,     0,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,     0,     0,    68,
       0,   132,    69,   133,   134,   135,     0,   136,     0,     0,
     137,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   139,
       3,     4,     5,     0,     6,     7,     0,     0,     0,     0,
     140,   141,   142,   143,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     0,     0,     0,     0,
      51,   257,     0,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     0,     0,
      68,     0,   132,    69,   133,   134,   135,     0,   136,     0,
       0,   137,   138,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     139,     1,     2,     3,     4,     5,     0,     6,     7,     0,
       0,   140,   141,   142,   143,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,     0,
       0,     0,    50,    51,    52,     0,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,     0,     0,    68,     0,     0,    69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     4,     5,     0,     6,     7,     0,     0,     0,     0,
       0,     0,     0,    70,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     0,     0,     0,     0,
      51,    52,     0,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     0,     0,
      68,     0,     0,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     4,     5,     0,     6,     7,     0,     0,
       0,     0,     0,     0,     0,   174,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,     0,     0,
       0,     0,    51,    52,     0,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
       0,     0,    68,     0,     0,    69,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     4,     5,     0,     6,     7,
       0,     0,     0,     0,     0,     0,     0,   282,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
       0,     0,     0,     0,    51,    52,     0,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,     0,     0,    68,     0,   341,    69,     0,     3,
       4,     5,   342,     6,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,     0,     0,     0,     0,    51,
      52,     0,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,     0,     0,    68,
       0,     0,    69
};

static const yytype_int16 yycheck[] =
{
       0,   139,   388,   201,   123,   152,     5,     6,     7,     8,
       9,    10,   129,   130,   319,   125,   105,   332,   323,   130,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,   110,   125,     0,   123,     3,
       5,     6,     7,     8,     9,    10,    87,   185,   133,     0,
       5,     6,     7,   105,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,   103,
       3,     4,   375,   125,   115,    87,    98,    99,    87,    79,
     385,   467,    85,    83,    87,   137,   138,     3,     4,    89,
       4,   123,   133,   212,   292,   170,   207,   400,   245,    99,
     210,   133,   407,   155,   138,   410,   115,   119,   108,   256,
     110,   133,   134,   428,   252,   115,    85,   120,    87,   133,
      83,   210,   122,    84,   133,    75,    87,   244,    61,    62,
      63,    64,    83,   122,   438,   134,   125,   442,    96,    97,
     100,   101,   280,   117,    94,    61,    62,    63,    64,   123,
     124,   120,    94,    95,   458,   460,   294,   125,   210,   117,
     122,   117,   116,   121,   116,   312,   313,   123,   122,   134,
     170,   117,   319,   283,   117,    87,   323,   133,   376,   115,
     123,   117,   116,   116,   116,   332,   116,   123,   122,   116,
     122,   119,   122,   122,   283,   122,   125,   133,    61,    62,
      63,   201,   321,   401,   119,   122,   325,   317,   125,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   317,   116,
     117,   283,   268,   269,   270,   271,   122,   375,   385,   125,
      84,   123,   120,    87,   122,   130,   131,   132,   395,    89,
      90,    91,     5,     6,     7,     8,     9,    10,   122,   123,
     407,   459,   400,   410,   383,   317,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,   428,   127,   120,   129,   122,   338,   264,   265,    87,
     266,   267,   292,   431,    87,   442,   122,   272,   273,   122,
     300,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   122,    87,   460,    87,   133,   124,   116,   115,   457,
     124,   115,   137,   136,   102,   135,   118,   104,    90,    90,
      90,   115,   115,   115,   125,   125,    89,    90,    91,    92,
     125,   120,   118,   115,   124,   115,    87,    84,   116,    87,
      67,   118,    87,   134,   119,   124,    87,   120,   124,   118,
     134,   115,   118,   134,   122,    87,   119,   118,   116,   124,
     115,   123,   372,   116,   124,   375,   376,   123,   125,   115,
     124,    14,   124,   116,   124,    87,   125,    87,    87,    87,
     124,    87,   116,   125,   253,   125,   125,   116,   274,   125,
     400,   401,   125,   275,   125,   125,   134,   134,   276,   278,
     277,   122,    94,   279,   100,   122,   108,    92,   458,   372,
     285,   139,   400,   300,   372,    83,   238,   446,   425,   388,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   438,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   458,   459,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    85,    -1,    87,    88,    89,    90,    91,    -1,
      93,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   115,    -1,    -1,    -1,   119,   120,    -1,    -1,
      -1,    -1,   125,   126,   127,   128,   129,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    91,    -1,    93,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,   125,
     126,   127,   128,   129,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    -1,    85,    -1,    87,    88,
      89,    90,    91,    -1,    93,    -1,    -1,    96,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,    -1,
     119,    -1,    -1,    -1,    -1,    -1,   125,   126,   127,   128,
     129,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    85,    -1,    87,    88,    89,    90,    91,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,   125,   126,   127,   128,   129,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    -1,    -1,    64,
      65,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    -1,
      85,    -1,    87,    88,    89,    90,    91,    -1,    93,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
     125,   126,   127,   128,   129,    -1,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    64,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    85,    -1,    87,    88,    89,    90,    91,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     0,    -1,   115,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,   126,   127,   128,   129,    -1,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    -1,    -1,    64,    65,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    -1,    85,    -1,    -1,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    85,    86,    87,    88,    89,    90,    91,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,     5,     6,     7,   119,     9,    10,
      -1,    -1,    -1,    -1,   126,   127,   128,   129,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    -1,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    -1,    85,    -1,    87,    88,    89,    90,
      91,    -1,    93,    -1,    -1,    96,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   115,    -1,    -1,    -1,   119,   120,
      -1,    -1,    -1,    -1,    -1,   126,   127,   128,   129,     5,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    -1,    -1,    -1,    65,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    91,    -1,    93,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,    -1,   118,     5,     6,     7,    -1,     9,    10,    -1,
     126,   127,   128,   129,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    85,    -1,    87,    88,    89,    90,    91,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,   125,   126,   127,   128,   129,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    -1,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    -1,    85,    -1,    87,    88,    89,    90,
      91,    -1,    93,    -1,    -1,    96,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   115,    -1,    -1,   118,     5,     6,
       7,    -1,     9,    10,    -1,   126,   127,   128,   129,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    -1,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    -1,    85,    -1,
      87,    88,    89,    90,    91,    -1,    93,    -1,    -1,    96,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,     5,
       6,     7,   119,     9,    10,    -1,    -1,    -1,    -1,   126,
     127,   128,   129,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    -1,    -1,    -1,    65,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    91,    -1,    93,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
     126,   127,   128,   129,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    -1,    -1,    -1,
      65,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    -1,
      85,    -1,    87,    88,    89,    90,    91,    -1,    93,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,   126,   127,   128,   129,    -1,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    64,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    85,    -1,    -1,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    -1,    -1,    -1,
      65,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    -1,
      85,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    65,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    85,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    -1,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    -1,    85,    -1,    87,    88,    -1,     5,
       6,     7,    93,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    -1,    -1,    -1,    65,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,    85,
      -1,    -1,    88
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     9,    10,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      64,    65,    66,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    85,    88,
     125,   169,   170,   171,   172,   173,   178,   179,   180,   181,
     182,   183,   184,   211,   212,   213,     4,     3,    87,   119,
     133,   125,   214,   116,   122,    61,    62,    63,   175,   176,
     181,   122,   125,    87,   182,   117,     0,   212,   119,   182,
     185,   186,     5,     6,     7,   119,   197,   123,   175,   174,
     177,   182,   176,    87,   115,   117,   123,   133,   217,   226,
     227,   228,    87,    89,    90,    91,    93,    96,    97,   115,
     126,   127,   128,   129,   140,   141,   142,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   168,   182,
     185,    87,   187,   188,   120,   186,   122,   122,   122,    11,
      12,    13,    15,    16,    17,    18,    67,   119,   120,   125,
     151,   164,   165,   167,   169,   170,   182,   190,   191,   192,
     193,   198,   199,   200,   203,   210,    87,    87,   174,   177,
     117,   228,   118,   168,    84,    87,     5,     6,     7,     8,
       9,    10,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,   134,   218,   219,
     220,   217,   123,   217,   226,   124,   151,   151,   167,   183,
      96,    97,   117,   121,   116,   116,   122,    66,   165,   115,
     151,   130,   131,   132,   127,   129,    94,    95,    98,    99,
     133,   134,   100,   101,   137,   136,   135,   102,   104,   103,
     138,   118,   120,   117,   123,   122,   125,    90,    90,    90,
     125,   125,   205,   115,   115,   125,   125,   167,   115,   120,
     194,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   124,   166,   122,   125,   120,   191,   117,   123,   124,
     226,   118,   168,   124,   228,   118,   115,   134,   219,    87,
     217,    86,   119,   165,   189,   215,   229,   116,   116,   143,
     167,    87,    93,   146,   165,   151,   151,   151,   153,   153,
     154,   154,   155,   155,   155,   155,   156,   156,   157,   158,
     159,   160,   161,   162,   167,   168,    87,   188,   134,   134,
     134,   191,   206,   167,   125,   204,   198,   165,   165,   168,
      87,   189,   228,   118,   189,   124,   228,    87,   124,   119,
     165,   215,   216,   151,   118,   123,   118,    67,   190,   199,
     207,   116,   167,   180,   202,   195,   118,   124,   228,   189,
     124,   116,    89,    90,    91,    92,   119,   220,   221,   222,
     223,   225,    85,    87,   120,   230,   231,   120,   122,   165,
     123,   115,   202,   208,   209,   191,   201,    87,   116,   120,
     123,   189,   124,   189,   222,   224,   115,   125,   124,   124,
     120,   231,   120,   165,   215,    87,   167,   125,   116,    14,
     124,   192,   196,   197,    87,   189,   120,   122,   224,    87,
     115,   133,    87,   115,   133,   116,   167,   196,   191,   189,
     222,   116,   125,    87,    87,   125,    87,    87,   125,   116,
     134,   116,   134,   125,   125,   125,   125
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   139,   140,   141,   141,   141,   141,   141,   142,   142,
     142,   142,   142,   142,   143,   144,   145,   145,   146,   146,
     147,   147,   148,   148,   149,   150,   150,   150,   151,   151,
     151,   151,   151,   152,   152,   152,   152,   153,   153,   153,
     153,   154,   154,   154,   155,   155,   155,   156,   156,   156,
     156,   156,   157,   157,   157,   158,   158,   159,   159,   160,
     160,   161,   161,   162,   162,   163,   163,   164,   164,   165,
     165,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   167,   167,   168,   169,   169,   170,   170,   171,
     171,   172,   172,   173,   174,   174,   174,   174,   174,   174,
     175,   175,   175,   175,   176,   176,   176,   176,   177,   178,
     178,   178,   178,   178,   178,   178,   179,   179,   179,   179,
     179,   179,   179,   180,   180,   181,   181,   181,   181,   181,
     182,   182,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     184,   184,   185,   185,   186,   187,   187,   188,   188,   188,
     188,   189,   189,   189,   190,   191,   191,   192,   192,   192,
     192,   192,   193,   194,   195,   193,   196,   196,   197,   197,
     198,   198,   199,   199,   200,   201,   201,   202,   202,   204,
     203,   205,   203,   206,   203,   207,   207,   208,   208,   209,
     209,   210,   210,   210,   210,   210,   211,   211,   212,   212,
     212,   214,   213,   215,   215,   216,   216,   216,   216,   217,
     217,   218,   218,   219,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   221,   221,   221,   221,   222,
     222,   222,   223,   224,   224,   225,   226,   227,   228,   228,
     228,   228,   228,   228,   228,   228,   229,   229,   230,   230,
     231,   231,   231,   231,   231,   231
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       1,     3,     2,     2,     1,     1,     1,     3,     2,     2,
       2,     1,     2,     3,     2,     1,     1,     1,     1,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     2,     2,     2,     4,     1,
       1,     2,     3,     3,     2,     4,     3,     4,     5,     7,
       3,     2,     3,     2,     0,     1,     1,     1,     1,     1,
       4,     6,     7,     8,     9,     6,     1,     3,     5,     6,
       7,     8,     5,     1,     2,     1,     1,     2,     2,     1,
       1,     4,     1,     1,     1,     1,     1,     1,     6,     6,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     4,     1,     2,     3,     1,     3,     1,     3,     4,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     0,     5,     1,     1,     2,     3,
       1,     2,     1,     2,     5,     3,     1,     1,     4,     0,
       6,     0,     8,     0,     7,     1,     1,     1,     0,     2,
       3,     2,     2,     2,     3,     2,     1,     2,     1,     1,
       1,     0,     3,     3,     4,     1,     1,     3,     3,     2,
       3,     1,     2,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     5,     2,     0,     1,
       1,     1,     2,     2,     2,     3,     4,     3,     1,     2,
       4,     6,     6,     4,     6,     6
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (parseContext, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, parseContext); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, TParseContext& parseContext)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (parseContext);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, TParseContext& parseContext)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, parseContext);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule, TParseContext& parseContext)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)], parseContext);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, parseContext); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, TParseContext& parseContext)
{
  YY_USE (yyvaluep);
  YY_USE (parseContext);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (TParseContext& parseContext)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, parseContext);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* variable_identifier: IDENTIFIER  */
#line 174 "hlslang/MachineIndependent/hlslang.y"
                 {
        // The symbol table search was done in the lexical phase
        const TSymbol* symbol = (yyvsp[0].lex).symbol;
        const TVariable* variable;
        if (symbol == 0) {
            parseContext.error((yyvsp[0].lex).line, "undeclared identifier", (yyvsp[0].lex).string->c_str(), "");
            parseContext.recover();
            TType type(EbtFloat, EbpUndefined);
            TVariable* fakeVariable = new TVariable((yyvsp[0].lex).string, type);
            parseContext.symbolTable.insert(*fakeVariable);
            variable = fakeVariable;
        } else {
            // This identifier can only be a variable type symbol 
            if (! symbol->isVariable()) {
                parseContext.error((yyvsp[0].lex).line, "variable expected", (yyvsp[0].lex).string->c_str(), "");
                parseContext.recover();
            }
            variable = static_cast<const TVariable*>(symbol);
        }

        // don't delete $1.string, it's used by error recovery, and the pool
        // pop will reclaim the memory
		
		if (variable->getType().getQualifier() == EvqConst && variable->constValue)
		{
			TIntermConstant* c = ir_add_constant(variable->getType(), (yyvsp[0].lex).line);
			c->copyValuesFrom(*variable->constValue);
			(yyval.interm.intermTypedNode) = c;
		}
		else
		{
			TIntermSymbol* sym = ir_add_symbol(variable, (yyvsp[0].lex).line);
			(yyval.interm.intermTypedNode) = sym;
		}
    }
#line 2240 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 3: /* primary_expression: variable_identifier  */
#line 212 "hlslang/MachineIndependent/hlslang.y"
                          {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 2248 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 4: /* primary_expression: INTCONSTANT  */
#line 215 "hlslang/MachineIndependent/hlslang.y"
                  {
        TIntermConstant* constant = ir_add_constant(TType(EbtInt, EbpUndefined, EvqConst), (yyvsp[0].lex).line);
		constant->setValue((yyvsp[0].lex).i);
		(yyval.interm.intermTypedNode) = constant;
    }
#line 2258 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 5: /* primary_expression: FLOATCONSTANT  */
#line 220 "hlslang/MachineIndependent/hlslang.y"
                    {
        TIntermConstant* constant = ir_add_constant(TType(EbtFloat, EbpUndefined, EvqConst), (yyvsp[0].lex).line);
		constant->setValue((yyvsp[0].lex).f);
		(yyval.interm.intermTypedNode) = constant;
    }
#line 2268 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 6: /* primary_expression: BOOLCONSTANT  */
#line 225 "hlslang/MachineIndependent/hlslang.y"
                   {
        TIntermConstant* constant = ir_add_constant(TType(EbtBool, EbpUndefined, EvqConst), (yyvsp[0].lex).line);
		constant->setValue((yyvsp[0].lex).b);
		(yyval.interm.intermTypedNode) = constant;
    }
#line 2278 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 7: /* primary_expression: LEFT_PAREN expression RIGHT_PAREN  */
#line 230 "hlslang/MachineIndependent/hlslang.y"
                                        {
        (yyval.interm.intermTypedNode) = (yyvsp[-1].interm.intermTypedNode);
    }
#line 2286 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 8: /* postfix_expression: primary_expression  */
#line 236 "hlslang/MachineIndependent/hlslang.y"
                         { 
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 2294 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 9: /* postfix_expression: postfix_expression LEFT_BRACKET int_expression RIGHT_BRACKET  */
#line 239 "hlslang/MachineIndependent/hlslang.y"
                                                                   {
        if (!(yyvsp[-3].interm.intermTypedNode)) {
            parseContext.error((yyvsp[-2].lex).line, " left of '[' is null ", "expression", "");
            YYERROR;
        }
        if (!(yyvsp[-3].interm.intermTypedNode)->isArray() && !(yyvsp[-3].interm.intermTypedNode)->isMatrix() && !(yyvsp[-3].interm.intermTypedNode)->isVector()) {
            if ((yyvsp[-3].interm.intermTypedNode)->getAsSymbolNode())
                parseContext.error((yyvsp[-2].lex).line, " left of '[' is not of type array, matrix, or vector ", (yyvsp[-3].interm.intermTypedNode)->getAsSymbolNode()->getSymbol().c_str(), "");
            else
                parseContext.error((yyvsp[-2].lex).line, " left of '[' is not of type array, matrix, or vector ", "expression", "");
            parseContext.recover();
        }
		if ((yyvsp[-1].interm.intermTypedNode)->getQualifier() == EvqConst) {
			if (((yyvsp[-3].interm.intermTypedNode)->isVector() || (yyvsp[-3].interm.intermTypedNode)->isMatrix()) && (yyvsp[-3].interm.intermTypedNode)->getType().getRowsCount() <= (yyvsp[-1].interm.intermTypedNode)->getAsConstant()->toInt() && !(yyvsp[-3].interm.intermTypedNode)->isArray() ) {
				parseContext.error((yyvsp[-2].lex).line, "", "[", "field selection out of range '%d'", (yyvsp[-1].interm.intermTypedNode)->getAsConstant()->toInt());
				parseContext.recover();
			} else {
				if ((yyvsp[-3].interm.intermTypedNode)->isArray()) {
					if ((yyvsp[-3].interm.intermTypedNode)->getType().getArraySize() == 0) {
						if ((yyvsp[-3].interm.intermTypedNode)->getType().getMaxArraySize() <= (yyvsp[-1].interm.intermTypedNode)->getAsConstant()->toInt()) {
							if (parseContext.arraySetMaxSize((yyvsp[-3].interm.intermTypedNode)->getAsSymbolNode(), (yyvsp[-3].interm.intermTypedNode)->getTypePointer(), (yyvsp[-1].interm.intermTypedNode)->getAsConstant()->toInt(), true, (yyvsp[-2].lex).line))
								parseContext.recover(); 
						} else {
							if (parseContext.arraySetMaxSize((yyvsp[-3].interm.intermTypedNode)->getAsSymbolNode(), (yyvsp[-3].interm.intermTypedNode)->getTypePointer(), 0, false, (yyvsp[-2].lex).line))
								parseContext.recover(); 
						}
					} else if ( (yyvsp[-1].interm.intermTypedNode)->getAsConstant()->toInt() >= (yyvsp[-3].interm.intermTypedNode)->getType().getArraySize()) {
						parseContext.error((yyvsp[-2].lex).line, "", "[", "array index out of range '%d'", (yyvsp[-1].interm.intermTypedNode)->getAsConstant()->toInt());
						parseContext.recover();
					}
				}
				(yyval.interm.intermTypedNode) = ir_add_index(EOpIndexDirect, (yyvsp[-3].interm.intermTypedNode), (yyvsp[-1].interm.intermTypedNode), (yyvsp[-2].lex).line);
			}
		} else {
			if ((yyvsp[-3].interm.intermTypedNode)->isArray() && (yyvsp[-3].interm.intermTypedNode)->getType().getArraySize() == 0) {
				parseContext.error((yyvsp[-2].lex).line, "", "[", "array must be redeclared with a size before being indexed with a variable");
				parseContext.recover();
			}
			
			(yyval.interm.intermTypedNode) = ir_add_index(EOpIndexIndirect, (yyvsp[-3].interm.intermTypedNode), (yyvsp[-1].interm.intermTypedNode), (yyvsp[-2].lex).line);
		}
        if ((yyval.interm.intermTypedNode) == 0) {
            TIntermConstant* constant = ir_add_constant(TType(EbtFloat, EbpUndefined, EvqConst), (yyvsp[-2].lex).line);
			constant->setValue(0.f);
			(yyval.interm.intermTypedNode) = constant;
        } else if ((yyvsp[-3].interm.intermTypedNode)->isArray()) {
            if ((yyvsp[-3].interm.intermTypedNode)->getType().getStruct())
                (yyval.interm.intermTypedNode)->setType(TType((yyvsp[-3].interm.intermTypedNode)->getType().getStruct(), (yyvsp[-3].interm.intermTypedNode)->getType().getTypeName(), EbpUndefined, (yyvsp[-3].interm.intermTypedNode)->getLine()));
            else
                (yyval.interm.intermTypedNode)->setType(TType((yyvsp[-3].interm.intermTypedNode)->getBasicType(), (yyvsp[-3].interm.intermTypedNode)->getPrecision(), EvqTemporary, (yyvsp[-3].interm.intermTypedNode)->getColsCount(),(yyvsp[-3].interm.intermTypedNode)->getRowsCount(),  (yyvsp[-3].interm.intermTypedNode)->isMatrix()));
                
            if ((yyvsp[-3].interm.intermTypedNode)->getType().getQualifier() == EvqConst)
                (yyval.interm.intermTypedNode)->getTypePointer()->changeQualifier(EvqConst);
        } else if ((yyvsp[-3].interm.intermTypedNode)->isMatrix() && (yyvsp[-3].interm.intermTypedNode)->getType().getQualifier() == EvqConst)         
            (yyval.interm.intermTypedNode)->setType(TType((yyvsp[-3].interm.intermTypedNode)->getBasicType(), (yyvsp[-3].interm.intermTypedNode)->getPrecision(), EvqConst, 1, (yyvsp[-3].interm.intermTypedNode)->getColsCount()));
        else if ((yyvsp[-3].interm.intermTypedNode)->isMatrix())            
            (yyval.interm.intermTypedNode)->setType(TType((yyvsp[-3].interm.intermTypedNode)->getBasicType(), (yyvsp[-3].interm.intermTypedNode)->getPrecision(), EvqTemporary, 1, (yyvsp[-3].interm.intermTypedNode)->getColsCount()));
        else if ((yyvsp[-3].interm.intermTypedNode)->isVector() && (yyvsp[-3].interm.intermTypedNode)->getType().getQualifier() == EvqConst)          
            (yyval.interm.intermTypedNode)->setType(TType((yyvsp[-3].interm.intermTypedNode)->getBasicType(), (yyvsp[-3].interm.intermTypedNode)->getPrecision(), EvqConst));
        else if ((yyvsp[-3].interm.intermTypedNode)->isVector())       
            (yyval.interm.intermTypedNode)->setType(TType((yyvsp[-3].interm.intermTypedNode)->getBasicType(), (yyvsp[-3].interm.intermTypedNode)->getPrecision(), EvqTemporary));
        else
            (yyval.interm.intermTypedNode)->setType((yyvsp[-3].interm.intermTypedNode)->getType());
    }
#line 2363 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 10: /* postfix_expression: function_call  */
#line 303 "hlslang/MachineIndependent/hlslang.y"
                    {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 2371 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 11: /* postfix_expression: postfix_expression DOT FIELD_SELECTION  */
#line 306 "hlslang/MachineIndependent/hlslang.y"
                                             {
        if (!(yyvsp[-2].interm.intermTypedNode)) {
            parseContext.error((yyvsp[0].lex).line, "field selection on null object", ".", "");
            YYERROR;
        }
        if ((yyvsp[-2].interm.intermTypedNode)->isArray()) {
            parseContext.error((yyvsp[0].lex).line, "cannot apply dot operator to an array", ".", "");
            parseContext.recover();
        }

        if ((yyvsp[-2].interm.intermTypedNode)->isVector()) {
            TVectorFields fields;
            if (! parseContext.parseVectorFields(*(yyvsp[0].lex).string, (yyvsp[-2].interm.intermTypedNode)->getRowsCount(), fields, (yyvsp[0].lex).line)) {
                fields.num = 1;
                fields.offsets[0] = 0;
                parseContext.recover();
            }

			(yyval.interm.intermTypedNode) = ir_add_vector_swizzle(fields, (yyvsp[-2].interm.intermTypedNode), (yyvsp[-1].lex).line, (yyvsp[0].lex).line);
        } else if ((yyvsp[-2].interm.intermTypedNode)->isMatrix()) {
            TVectorFields fields;
            if (!parseContext.parseMatrixFields(*(yyvsp[0].lex).string, (yyvsp[-2].interm.intermTypedNode)->getColsCount(), (yyvsp[-2].interm.intermTypedNode)->getRowsCount(), fields, (yyvsp[0].lex).line)) {
                fields.num = 1;
                fields.offsets[0] = 0;
                parseContext.recover();
            }

            TString vectorString = *(yyvsp[0].lex).string;
            TIntermTyped* index = ir_add_swizzle(fields, (yyvsp[0].lex).line);                
            (yyval.interm.intermTypedNode) = ir_add_index(EOpMatrixSwizzle, (yyvsp[-2].interm.intermTypedNode), index, (yyvsp[-1].lex).line);
            (yyval.interm.intermTypedNode)->setType(TType((yyvsp[-2].interm.intermTypedNode)->getBasicType(), (yyvsp[-2].interm.intermTypedNode)->getPrecision(), EvqTemporary, 1, fields.num));
                    
        } else if ((yyvsp[-2].interm.intermTypedNode)->getBasicType() == EbtStruct) {
            bool fieldFound = false;
            TTypeList* fields = (yyvsp[-2].interm.intermTypedNode)->getType().getStruct();
            if (fields == 0) {
                parseContext.error((yyvsp[-1].lex).line, "structure has no fields", "Internal Error", "");
                parseContext.recover();
                (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
            } else {
                unsigned int i;
                for (i = 0; i < fields->size(); ++i) {
                    if ((*fields)[i].type->getFieldName() == *(yyvsp[0].lex).string) {
                        fieldFound = true;
                        break;
                    }
                }
                if (fieldFound) {
					TIntermConstant* index = ir_add_constant(TType(EbtInt, EbpUndefined, EvqConst), (yyvsp[0].lex).line);
					index->setValue(i);
					(yyval.interm.intermTypedNode) = ir_add_index(EOpIndexDirectStruct, (yyvsp[-2].interm.intermTypedNode), index, (yyvsp[-1].lex).line);                
					(yyval.interm.intermTypedNode)->setType(*(*fields)[i].type);
                } else {
                    parseContext.error((yyvsp[-1].lex).line, " no such field in structure", (yyvsp[0].lex).string->c_str(), "");
                    parseContext.recover();
                    (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
                }
            }
        } else if ((yyvsp[-2].interm.intermTypedNode)->isScalar()) {

            // HLSL allows ".xxxx" field selection on single component floats.  Handle that here.
            TVectorFields fields;

            // Check to make sure only the "x" component is accessed.
            if (! parseContext.parseVectorFields(*(yyvsp[0].lex).string, 1, fields, (yyvsp[0].lex).line))
			{
                fields.num = 1;
                fields.offsets[0] = 0;
                parseContext.recover();
				(yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
            }
			else
			{
				// Create the appropriate constructor based on the number of ".x"'s there are in the selection field
				TString vectorString = *(yyvsp[0].lex).string;
				TQualifier qualifier = (yyvsp[-2].interm.intermTypedNode)->getType().getQualifier() == EvqConst ? EvqConst : EvqTemporary;
				TType type((yyvsp[-2].interm.intermTypedNode)->getBasicType(), (yyvsp[-2].interm.intermTypedNode)->getPrecision(), qualifier, 1, (int) vectorString.size());
				(yyval.interm.intermTypedNode) = parseContext.constructBuiltIn(&type, parseContext.getConstructorOp(type),
												   (yyval.interm.intermTypedNode), (yyvsp[-2].interm.intermTypedNode)->getLine(), false);
			}
        } else {
            parseContext.error((yyvsp[-1].lex).line, " field selection requires structure, vector, or matrix on left hand side", (yyvsp[0].lex).string->c_str(), "");
            parseContext.recover();
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
        }
        // don't delete $3.string, it's from the pool
    }
#line 2463 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 12: /* postfix_expression: postfix_expression INC_OP  */
#line 393 "hlslang/MachineIndependent/hlslang.y"
                                {
        if (parseContext.lValueErrorCheck((yyvsp[0].lex).line, "++", (yyvsp[-1].interm.intermTypedNode)))
            parseContext.recover();
        (yyval.interm.intermTypedNode) = ir_add_unary_math(EOpPostIncrement, (yyvsp[-1].interm.intermTypedNode), (yyvsp[0].lex).line, parseContext);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.unaryOpError((yyvsp[0].lex).line, "++", (yyvsp[-1].interm.intermTypedNode)->getCompleteString());
            parseContext.recover();
            (yyval.interm.intermTypedNode) = (yyvsp[-1].interm.intermTypedNode);
        }
    }
#line 2478 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 13: /* postfix_expression: postfix_expression DEC_OP  */
#line 403 "hlslang/MachineIndependent/hlslang.y"
                                {
        if (parseContext.lValueErrorCheck((yyvsp[0].lex).line, "--", (yyvsp[-1].interm.intermTypedNode)))
            parseContext.recover();
        (yyval.interm.intermTypedNode) = ir_add_unary_math(EOpPostDecrement, (yyvsp[-1].interm.intermTypedNode), (yyvsp[0].lex).line, parseContext);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.unaryOpError((yyvsp[0].lex).line, "--", (yyvsp[-1].interm.intermTypedNode)->getCompleteString());
            parseContext.recover();
            (yyval.interm.intermTypedNode) = (yyvsp[-1].interm.intermTypedNode);
        }
    }
#line 2493 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 14: /* int_expression: expression  */
#line 416 "hlslang/MachineIndependent/hlslang.y"
                 {
        if (parseContext.scalarErrorCheck((yyvsp[0].interm.intermTypedNode), "[]"))
            parseContext.recover();
        TType type(EbtInt, EbpUndefined);
        (yyval.interm.intermTypedNode) = parseContext.constructBuiltIn(&type, EOpConstructInt, (yyvsp[0].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode)->getLine(), true);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.error((yyvsp[0].interm.intermTypedNode)->getLine(), "cannot convert to index", "[]", "");
            parseContext.recover();
            (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
        }
    }
#line 2509 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 15: /* function_call: function_call_or_method  */
#line 430 "hlslang/MachineIndependent/hlslang.y"
                              {
        TFunction* fnCall = (yyvsp[0].interm).function;
        TOperator op = fnCall->getBuiltInOp();

        if (op == EOpArrayLength) {
            if ((yyvsp[0].interm).intermNode->getAsTyped() == 0 || (yyvsp[0].interm).intermNode->getAsTyped()->getType().getArraySize() == 0) {
                parseContext.error((yyvsp[0].interm).line, "", fnCall->getName().c_str(), "array must be declared with a size before using this method");
                parseContext.recover();
            }

			TIntermConstant* constant = ir_add_constant(TType(EbtInt, EbpUndefined, EvqConst), (yyvsp[0].interm).line);
			constant->setValue((yyvsp[0].interm).intermNode->getAsTyped()->getType().getArraySize());
            (yyval.interm.intermTypedNode) = constant;
        } else if (op != EOpNull) {
            //
            // Then this should be a constructor.
            // Don't go through the symbol table for constructors.
            // Their parameters will be verified algorithmically.
            //
            TType type(EbtVoid, EbpUndefined);  // use this to get the type back
            if (parseContext.constructorErrorCheck((yyvsp[0].interm).line, (yyvsp[0].interm).intermNode, *fnCall, op, &type)) {
                (yyval.interm.intermTypedNode) = 0;
            } else {
                //
                // It's a constructor, of type 'type'.
                //
                (yyval.interm.intermTypedNode) = parseContext.addConstructor((yyvsp[0].interm).intermNode, &type, op, fnCall, (yyvsp[0].interm).line);
            }

            if ((yyval.interm.intermTypedNode) == 0) {
                parseContext.recover();
                (yyval.interm.intermTypedNode) = ir_set_aggregate_op(0, op, (yyvsp[0].interm).line);
				(yyval.interm.intermTypedNode)->setType(type);
            }
        } else {
            //
            // Not a constructor.  Find it in the symbol table.
            //
            const TFunction* fnCandidate;
            bool builtIn;
            fnCandidate = parseContext.findFunction((yyvsp[0].interm).line, fnCall, &builtIn);

            if ( fnCandidate && fnCandidate->getMangledName() != fnCall->getMangledName()) {
                //add constructors to arguments to ensure that they have proper types
                TIntermNode *temp = parseContext.promoteFunctionArguments( (yyvsp[0].interm).intermNode,
                                      fnCandidate);
                if (temp)
                    (yyvsp[0].interm).intermNode = temp;
                else {
                    parseContext.error( (yyvsp[0].interm).intermNode->getLine(), " unable to suitably promote arguments to function",
                                        fnCandidate->getName().c_str(), "");
                    fnCandidate = 0;
                }
            }

            if (fnCandidate) {
                //
                // A declared function.  But, it might still map to a built-in
                // operation.
                //
                op = fnCandidate->getBuiltInOp();
                if (builtIn && op != EOpNull) {
                    //
                    // A function call mapped to a built-in operation.
                    //
                    if (fnCandidate->getParamCount() == 1) {
                        //
                        // Treat it like a built-in unary operator.
                        //
                        (yyval.interm.intermTypedNode) = ir_add_unary_math(op, (yyvsp[0].interm).intermNode, gNullSourceLoc, parseContext);
                        if ((yyval.interm.intermTypedNode) == 0)  {
                            parseContext.error((yyvsp[0].interm).intermNode->getLine(), " wrong operand type", "Internal Error",
                                "built in unary operator function.  Type: %s",
                                static_cast<TIntermTyped*>((yyvsp[0].interm).intermNode)->getCompleteString().c_str());
                            YYERROR;
                        }
                    } else {
                        (yyval.interm.intermTypedNode) = ir_set_aggregate_op((yyvsp[0].interm).intermAggregate, op, (yyvsp[0].interm).line);
						(yyval.interm.intermTypedNode)->setType(fnCandidate->getReturnType());
                    }
                } else {
                    // This is a real function call
                    
                    (yyval.interm.intermTypedNode) = ir_set_aggregate_op((yyvsp[0].interm).intermAggregate, EOpFunctionCall, (yyvsp[0].interm).line);
                    (yyval.interm.intermTypedNode)->setType(fnCandidate->getReturnType());                   
                    
                    (yyval.interm.intermTypedNode)->getAsAggregate()->setName(fnCandidate->getMangledName());
                    (yyval.interm.intermTypedNode)->getAsAggregate()->setPlainName(fnCandidate->getName());

                    TQualifier qual;
                    for (int i = 0; i < fnCandidate->getParamCount(); ++i) {
                        qual = (*fnCandidate)[i].type->getQualifier();
                        if (qual == EvqOut || qual == EvqInOut) {
                            if (parseContext.lValueErrorCheck((yyval.interm.intermTypedNode)->getLine(), "assign", (yyval.interm.intermTypedNode)->getAsAggregate()->getNodes()[i]->getAsTyped())) {
                                parseContext.error((yyvsp[0].interm).intermNode->getLine(), "Constant value cannot be passed for 'out' or 'inout' parameters.", "Error", "");
                                parseContext.recover();
                            }
                        }
                    }
                }
                (yyval.interm.intermTypedNode)->setType(fnCandidate->getReturnType());
            } else {
                // error message was put out by PaFindFunction()
                // Put on a dummy node for error recovery
                
				TIntermConstant* constant = ir_add_constant(TType(EbtFloat, EbpUndefined, EvqConst), (yyvsp[0].interm).line);
				constant->setValue(0.f);
				(yyval.interm.intermTypedNode) = constant;
                parseContext.recover();
            }
        }
        delete fnCall;
    }
#line 2627 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 16: /* function_call_or_method: function_call_generic  */
#line 546 "hlslang/MachineIndependent/hlslang.y"
                            {
        (yyval.interm) = (yyvsp[0].interm);
    }
#line 2635 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 17: /* function_call_or_method: postfix_expression DOT function_call_generic  */
#line 549 "hlslang/MachineIndependent/hlslang.y"
                                                   {
        if ((yyvsp[-2].interm.intermTypedNode)->isArray() && (yyvsp[0].interm).function->getName() == "length") {
            //
            // implement array.length()
            //
            (yyval.interm) = (yyvsp[0].interm);
            (yyval.interm).intermNode = (yyvsp[-2].interm.intermTypedNode);
            (yyval.interm).function->relateToOperator(EOpArrayLength);

        } else {
            parseContext.error((yyvsp[0].interm).line, "methods are not supported", "", "");
            parseContext.recover();
            (yyval.interm) = (yyvsp[0].interm);
        }
    }
#line 2655 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 18: /* function_call_generic: function_call_header_with_parameters RIGHT_PAREN  */
#line 567 "hlslang/MachineIndependent/hlslang.y"
                                                       {
        (yyval.interm) = (yyvsp[-1].interm);
        (yyval.interm).line = (yyvsp[0].lex).line;
    }
#line 2664 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 19: /* function_call_generic: function_call_header_no_parameters RIGHT_PAREN  */
#line 571 "hlslang/MachineIndependent/hlslang.y"
                                                     {
        (yyval.interm) = (yyvsp[-1].interm);
        (yyval.interm).line = (yyvsp[0].lex).line;
    }
#line 2673 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 20: /* function_call_header_no_parameters: function_call_header VOID_TYPE  */
#line 578 "hlslang/MachineIndependent/hlslang.y"
                                     {
        (yyval.interm).function = (yyvsp[-1].interm.function);
        (yyval.interm).intermNode = 0;
    }
#line 2682 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 21: /* function_call_header_no_parameters: function_call_header  */
#line 582 "hlslang/MachineIndependent/hlslang.y"
                           {
        (yyval.interm).function = (yyvsp[0].interm.function);
        (yyval.interm).intermNode = 0;
    }
#line 2691 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 22: /* function_call_header_with_parameters: function_call_header assign_expression  */
#line 589 "hlslang/MachineIndependent/hlslang.y"
                                             {
		if (!(yyvsp[0].interm.intermTypedNode)) {
          YYERROR;
		}
		TParameter param = { 0, 0, new TType((yyvsp[0].interm.intermTypedNode)->getType()) };
        (yyvsp[-1].interm.function)->addParameter(param);
        (yyval.interm).function = (yyvsp[-1].interm.function);
        (yyval.interm).intermNode = (yyvsp[0].interm.intermTypedNode);
    }
#line 2705 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 23: /* function_call_header_with_parameters: function_call_header_with_parameters COMMA assign_expression  */
#line 598 "hlslang/MachineIndependent/hlslang.y"
                                                                   {
		if (!(yyvsp[0].interm.intermTypedNode)) {
          YYERROR;
		}
        TParameter param = { 0, 0, new TType((yyvsp[0].interm.intermTypedNode)->getType()) };
        (yyvsp[-2].interm).function->addParameter(param);
        (yyval.interm).function = (yyvsp[-2].interm).function;
        (yyval.interm).intermNode = ir_grow_aggregate((yyvsp[-2].interm).intermNode, (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line);
    }
#line 2719 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 24: /* function_call_header: function_identifier LEFT_PAREN  */
#line 610 "hlslang/MachineIndependent/hlslang.y"
                                     {
        (yyval.interm.function) = (yyvsp[-1].interm.function);
    }
#line 2727 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 25: /* function_identifier: type_specifier  */
#line 618 "hlslang/MachineIndependent/hlslang.y"
                     {
        //
        // Constructor
        //
        if ((yyvsp[0].interm.type).array) {
            //TODO : figure out how to deal with array constructors
        }

        if ((yyvsp[0].interm.type).userDef) {
            TString tempString = "";
            TType type((yyvsp[0].interm.type));
            TFunction *function = new TFunction(&tempString, type, EOpConstructStruct);
            (yyval.interm.function) = function;
        } else {
            TOperator op = ir_get_constructor_op((yyvsp[0].interm.type), parseContext, false);
            if (op == EOpNull) {
                parseContext.error((yyvsp[0].interm.type).line, "cannot construct this type", TType::getBasicString((yyvsp[0].interm.type).type), "");
                parseContext.recover();
                (yyvsp[0].interm.type).type = EbtFloat;
                op = EOpConstructFloat;
            }
            TString tempString = "";
            TType type((yyvsp[0].interm.type));
            TFunction *function = new TFunction(&tempString, type, op);
            (yyval.interm.function) = function;
        }
    }
#line 2759 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 26: /* function_identifier: IDENTIFIER  */
#line 645 "hlslang/MachineIndependent/hlslang.y"
                 {
		if (parseContext.reservedErrorCheck((yyvsp[0].lex).line, *(yyvsp[0].lex).string)) 
			parseContext.recover();
		TType type(EbtVoid, EbpUndefined);
		const TString *mangled;
		if ( *(yyvsp[0].lex).string == "main")
			mangled = NewPoolTString("xlat_main");
		else
			mangled = (yyvsp[0].lex).string;
		TFunction *function = new TFunction( mangled, type);
		(yyval.interm.function) = function;
	}
#line 2776 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 27: /* function_identifier: FIELD_SELECTION  */
#line 657 "hlslang/MachineIndependent/hlslang.y"
                      {
		if (parseContext.reservedErrorCheck((yyvsp[0].lex).line, *(yyvsp[0].lex).string)) 
			parseContext.recover();
		TType type(EbtVoid, EbpUndefined);
		TFunction *function = new TFunction((yyvsp[0].lex).string, type);
		(yyval.interm.function) = function;
    }
#line 2788 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 28: /* unary_expression: postfix_expression  */
#line 667 "hlslang/MachineIndependent/hlslang.y"
                         {
		(yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 2796 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 29: /* unary_expression: INC_OP unary_expression  */
#line 670 "hlslang/MachineIndependent/hlslang.y"
                              {
		if (parseContext.lValueErrorCheck((yyvsp[-1].lex).line, "++", (yyvsp[0].interm.intermTypedNode)))
			parseContext.recover();
		(yyval.interm.intermTypedNode) = ir_add_unary_math(EOpPreIncrement, (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, parseContext);
		if ((yyval.interm.intermTypedNode) == 0) {
			parseContext.unaryOpError((yyvsp[-1].lex).line, "++", (yyvsp[0].interm.intermTypedNode)->getCompleteString());
			parseContext.recover();
			(yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
		}
    }
#line 2811 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 30: /* unary_expression: DEC_OP unary_expression  */
#line 680 "hlslang/MachineIndependent/hlslang.y"
                              {
        if (parseContext.lValueErrorCheck((yyvsp[-1].lex).line, "--", (yyvsp[0].interm.intermTypedNode)))
            parseContext.recover();
		(yyval.interm.intermTypedNode) = ir_add_unary_math(EOpPreDecrement, (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, parseContext);
		if ((yyval.interm.intermTypedNode) == 0) {
			parseContext.unaryOpError((yyvsp[-1].lex).line, "--", (yyvsp[0].interm.intermTypedNode)->getCompleteString());
			parseContext.recover();
			(yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
		}
    }
#line 2826 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 31: /* unary_expression: unary_operator unary_expression  */
#line 690 "hlslang/MachineIndependent/hlslang.y"
                                      {
		if ((yyvsp[-1].interm).op != EOpNull) {
			(yyval.interm.intermTypedNode) = ir_add_unary_math((yyvsp[-1].interm).op, (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].interm).line, parseContext);
			if ((yyval.interm.intermTypedNode) == 0) {
				const char* errorOp = "";
				switch((yyvsp[-1].interm).op) {
					case EOpNegative:   errorOp = "-"; break;
					case EOpLogicalNot: errorOp = "!"; break;
					case EOpBitwiseNot: errorOp = "~"; break;
					default: break;
				}
				parseContext.unaryOpError((yyvsp[-1].interm).line, errorOp, (yyvsp[0].interm.intermTypedNode)->getCompleteString());
				parseContext.recover();
				(yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
			}
		} else
			(yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 2849 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 32: /* unary_expression: LEFT_PAREN type_specifier_nonarray RIGHT_PAREN unary_expression  */
#line 708 "hlslang/MachineIndependent/hlslang.y"
                                                                      {
        // cast operator, insert constructor
        TOperator op = ir_get_constructor_op((yyvsp[-2].interm.type), parseContext, true);
        if (op == EOpNull) {
            parseContext.error((yyvsp[-2].interm.type).line, "cannot cast this type", TType::getBasicString((yyvsp[-2].interm.type).type), "");
            parseContext.recover();
            (yyvsp[-2].interm.type).type = EbtFloat;
            op = EOpConstructFloat;
        }
        TString tempString = "";
        TType type((yyvsp[-2].interm.type));
        TFunction *function = new TFunction(&tempString, type, op);
        TParameter param = { 0, 0, new TType((yyvsp[0].interm.intermTypedNode)->getType()) };
        function->addParameter(param);
        TType type2(EbtVoid, EbpUndefined);  // use this to get the type back
        if (parseContext.constructorErrorCheck((yyvsp[-2].interm.type).line, (yyvsp[0].interm.intermTypedNode), *function, op, &type2)) {
            (yyval.interm.intermTypedNode) = 0;
        } else {
            //
            // It's a constructor, of type 'type'.
            //
            (yyval.interm.intermTypedNode) = parseContext.addConstructor((yyvsp[0].interm.intermTypedNode), &type2, op, function, (yyvsp[-2].interm.type).line);
        }

        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.recover();
            (yyval.interm.intermTypedNode) = ir_set_aggregate_op(0, op, (yyvsp[-2].interm.type).line);
        } else {
			(yyval.interm.intermTypedNode)->setType(type2);
		}
	}
#line 2885 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 33: /* unary_operator: PLUS  */
#line 743 "hlslang/MachineIndependent/hlslang.y"
            { (yyval.interm).line = (yyvsp[0].lex).line; (yyval.interm).op = EOpNull; }
#line 2891 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 34: /* unary_operator: DASH  */
#line 744 "hlslang/MachineIndependent/hlslang.y"
            { (yyval.interm).line = (yyvsp[0].lex).line; (yyval.interm).op = EOpNegative; }
#line 2897 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 35: /* unary_operator: BANG  */
#line 745 "hlslang/MachineIndependent/hlslang.y"
            { (yyval.interm).line = (yyvsp[0].lex).line; (yyval.interm).op = EOpLogicalNot; }
#line 2903 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 36: /* unary_operator: TILDE  */
#line 746 "hlslang/MachineIndependent/hlslang.y"
            { UNSUPPORTED_FEATURE("~", (yyvsp[0].lex).line);
              (yyval.interm).line = (yyvsp[0].lex).line; (yyval.interm).op = EOpBitwiseNot; }
#line 2910 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 37: /* mul_expression: unary_expression  */
#line 752 "hlslang/MachineIndependent/hlslang.y"
                       { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 2916 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 38: /* mul_expression: mul_expression STAR unary_expression  */
#line 753 "hlslang/MachineIndependent/hlslang.y"
                                                        { (yyval.interm.intermTypedNode) = parseContext.add_binary(EOpMul, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, "*", false); }
#line 2922 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 39: /* mul_expression: mul_expression SLASH unary_expression  */
#line 754 "hlslang/MachineIndependent/hlslang.y"
                                                        { (yyval.interm.intermTypedNode) = parseContext.add_binary(EOpDiv, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, "/", false); }
#line 2928 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 40: /* mul_expression: mul_expression PERCENT unary_expression  */
#line 755 "hlslang/MachineIndependent/hlslang.y"
                                                { (yyval.interm.intermTypedNode) = parseContext.add_binary(EOpMod, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, "%", false); }
#line 2934 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 41: /* add_expression: mul_expression  */
#line 759 "hlslang/MachineIndependent/hlslang.y"
                     { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 2940 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 42: /* add_expression: add_expression PLUS mul_expression  */
#line 760 "hlslang/MachineIndependent/hlslang.y"
                                                        { (yyval.interm.intermTypedNode) = parseContext.add_binary(EOpAdd, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, "+", false); }
#line 2946 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 43: /* add_expression: add_expression DASH mul_expression  */
#line 761 "hlslang/MachineIndependent/hlslang.y"
                                                        { (yyval.interm.intermTypedNode) = parseContext.add_binary(EOpSub, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, "-", false); }
#line 2952 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 44: /* shift_expression: add_expression  */
#line 765 "hlslang/MachineIndependent/hlslang.y"
                     { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 2958 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 45: /* shift_expression: shift_expression LEFT_OP add_expression  */
#line 766 "hlslang/MachineIndependent/hlslang.y"
                                                { (yyval.interm.intermTypedNode) = parseContext.add_binary(EOpLeftShift, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, "<<", false); }
#line 2964 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 46: /* shift_expression: shift_expression RIGHT_OP add_expression  */
#line 767 "hlslang/MachineIndependent/hlslang.y"
                                                { (yyval.interm.intermTypedNode) = parseContext.add_binary(EOpRightShift, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, ">>", false); }
#line 2970 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 47: /* rel_expression: shift_expression  */
#line 771 "hlslang/MachineIndependent/hlslang.y"
                       { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 2976 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 48: /* rel_expression: rel_expression LEFT_ANGLE shift_expression  */
#line 772 "hlslang/MachineIndependent/hlslang.y"
                                                        { (yyval.interm.intermTypedNode) = parseContext.add_binary(EOpLessThan, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, "<", true); }
#line 2982 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 49: /* rel_expression: rel_expression RIGHT_ANGLE shift_expression  */
#line 773 "hlslang/MachineIndependent/hlslang.y"
                                                        { (yyval.interm.intermTypedNode) = parseContext.add_binary(EOpGreaterThan, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, ">", true); }
#line 2988 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 50: /* rel_expression: rel_expression LE_OP shift_expression  */
#line 774 "hlslang/MachineIndependent/hlslang.y"
                                                                { (yyval.interm.intermTypedNode) = parseContext.add_binary(EOpLessThanEqual, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, "<=", true); }
#line 2994 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 51: /* rel_expression: rel_expression GE_OP shift_expression  */
#line 775 "hlslang/MachineIndependent/hlslang.y"
                                                                { (yyval.interm.intermTypedNode) = parseContext.add_binary(EOpGreaterThanEqual, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, ">=", true); }
#line 3000 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 52: /* eq_expression: rel_expression  */
#line 779 "hlslang/MachineIndependent/hlslang.y"
                     { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3006 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 53: /* eq_expression: eq_expression EQ_OP rel_expression  */
#line 780 "hlslang/MachineIndependent/hlslang.y"
                                                        { (yyval.interm.intermTypedNode) = parseContext.add_binary(EOpEqual, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, "==", true); }
#line 3012 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 54: /* eq_expression: eq_expression NE_OP rel_expression  */
#line 781 "hlslang/MachineIndependent/hlslang.y"
                                                        { (yyval.interm.intermTypedNode) = parseContext.add_binary(EOpNotEqual, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, "!=", true); }
#line 3018 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 55: /* and_expression: eq_expression  */
#line 785 "hlslang/MachineIndependent/hlslang.y"
                    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3024 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 56: /* and_expression: and_expression AMPERSAND eq_expression  */
#line 786 "hlslang/MachineIndependent/hlslang.y"
                                                { (yyval.interm.intermTypedNode) = parseContext.add_binary(EOpAnd, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, "&", false); }
#line 3030 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 57: /* xor_expression: and_expression  */
#line 790 "hlslang/MachineIndependent/hlslang.y"
                     { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3036 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 58: /* xor_expression: xor_expression CARET and_expression  */
#line 791 "hlslang/MachineIndependent/hlslang.y"
                                                        { (yyval.interm.intermTypedNode) = parseContext.add_binary(EOpExclusiveOr, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, "^", false); }
#line 3042 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 59: /* or_expression: xor_expression  */
#line 795 "hlslang/MachineIndependent/hlslang.y"
                     { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3048 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 60: /* or_expression: or_expression VERTICAL_BAR xor_expression  */
#line 796 "hlslang/MachineIndependent/hlslang.y"
                                                { (yyval.interm.intermTypedNode) = parseContext.add_binary(EOpInclusiveOr, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, "|", false); }
#line 3054 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 61: /* log_and_expression: or_expression  */
#line 800 "hlslang/MachineIndependent/hlslang.y"
                    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3060 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 62: /* log_and_expression: log_and_expression AND_OP or_expression  */
#line 801 "hlslang/MachineIndependent/hlslang.y"
                                                        { (yyval.interm.intermTypedNode) = parseContext.add_binary(EOpLogicalAnd, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, "&&", true); }
#line 3066 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 63: /* log_xor_expression: log_and_expression  */
#line 805 "hlslang/MachineIndependent/hlslang.y"
                         { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3072 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 64: /* log_xor_expression: log_xor_expression XOR_OP log_and_expression  */
#line 806 "hlslang/MachineIndependent/hlslang.y"
                                                        { (yyval.interm.intermTypedNode) = parseContext.add_binary(EOpLogicalXor, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, "^^", true); }
#line 3078 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 65: /* log_or_expression: log_xor_expression  */
#line 810 "hlslang/MachineIndependent/hlslang.y"
                         { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3084 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 66: /* log_or_expression: log_or_expression OR_OP log_xor_expression  */
#line 811 "hlslang/MachineIndependent/hlslang.y"
                                                        { (yyval.interm.intermTypedNode) = parseContext.add_binary(EOpLogicalOr, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, "||", true); }
#line 3090 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 67: /* cond_expression: log_or_expression  */
#line 815 "hlslang/MachineIndependent/hlslang.y"
                        { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3096 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 68: /* cond_expression: log_or_expression QUESTION expression COLON assign_expression  */
#line 816 "hlslang/MachineIndependent/hlslang.y"
                                                                    {
       if (parseContext.boolOrVectorErrorCheck((yyvsp[-3].lex).line, (yyvsp[-4].interm.intermTypedNode)))
            parseContext.recover();
       
		(yyval.interm.intermTypedNode) = ir_add_selection((yyvsp[-4].interm.intermTypedNode), (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-3].lex).line, parseContext.infoSink);
           
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-3].lex).line, ":", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            parseContext.recover();
            (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
        }
    }
#line 3113 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 69: /* assign_expression: cond_expression  */
#line 831 "hlslang/MachineIndependent/hlslang.y"
                      { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3119 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 70: /* assign_expression: unary_expression assignment_operator assign_expression  */
#line 832 "hlslang/MachineIndependent/hlslang.y"
                                                             {        
        if (parseContext.lValueErrorCheck((yyvsp[-1].interm).line, "assign", (yyvsp[-2].interm.intermTypedNode)))
            parseContext.recover();
        (yyval.interm.intermTypedNode) = parseContext.addAssign((yyvsp[-1].interm).op, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].interm).line);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.assignError((yyvsp[-1].interm).line, "assign", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            parseContext.recover();
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
        } else if (((yyvsp[-2].interm.intermTypedNode)->isArray() || (yyvsp[0].interm.intermTypedNode)->isArray()))
            parseContext.recover();
    }
#line 3135 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 71: /* assignment_operator: EQUAL  */
#line 846 "hlslang/MachineIndependent/hlslang.y"
                   { (yyval.interm).line = (yyvsp[0].lex).line; (yyval.interm).op = EOpAssign; }
#line 3141 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 72: /* assignment_operator: MUL_ASSIGN  */
#line 847 "hlslang/MachineIndependent/hlslang.y"
                   { (yyval.interm).line = (yyvsp[0].lex).line; (yyval.interm).op = EOpMulAssign; }
#line 3147 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 73: /* assignment_operator: DIV_ASSIGN  */
#line 848 "hlslang/MachineIndependent/hlslang.y"
                   { (yyval.interm).line = (yyvsp[0].lex).line; (yyval.interm).op = EOpDivAssign; }
#line 3153 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 74: /* assignment_operator: MOD_ASSIGN  */
#line 849 "hlslang/MachineIndependent/hlslang.y"
                   { UNSUPPORTED_FEATURE("%=", (yyvsp[0].lex).line);  (yyval.interm).line = (yyvsp[0].lex).line; (yyval.interm).op = EOpModAssign; }
#line 3159 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 75: /* assignment_operator: ADD_ASSIGN  */
#line 850 "hlslang/MachineIndependent/hlslang.y"
                   { (yyval.interm).line = (yyvsp[0].lex).line; (yyval.interm).op = EOpAddAssign; }
#line 3165 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 76: /* assignment_operator: SUB_ASSIGN  */
#line 851 "hlslang/MachineIndependent/hlslang.y"
                   { (yyval.interm).line = (yyvsp[0].lex).line; (yyval.interm).op = EOpSubAssign; }
#line 3171 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 77: /* assignment_operator: LEFT_ASSIGN  */
#line 852 "hlslang/MachineIndependent/hlslang.y"
                   { UNSUPPORTED_FEATURE("<<=", (yyvsp[0].lex).line); (yyval.interm).line = (yyvsp[0].lex).line; (yyval.interm).op = EOpLeftShiftAssign; }
#line 3177 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 78: /* assignment_operator: RIGHT_ASSIGN  */
#line 853 "hlslang/MachineIndependent/hlslang.y"
                   { UNSUPPORTED_FEATURE("<<=", (yyvsp[0].lex).line); (yyval.interm).line = (yyvsp[0].lex).line; (yyval.interm).op = EOpRightShiftAssign; }
#line 3183 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 79: /* assignment_operator: AND_ASSIGN  */
#line 854 "hlslang/MachineIndependent/hlslang.y"
                   { UNSUPPORTED_FEATURE("&=",  (yyvsp[0].lex).line); (yyval.interm).line = (yyvsp[0].lex).line; (yyval.interm).op = EOpAndAssign; }
#line 3189 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 80: /* assignment_operator: XOR_ASSIGN  */
#line 855 "hlslang/MachineIndependent/hlslang.y"
                   { UNSUPPORTED_FEATURE("^=",  (yyvsp[0].lex).line); (yyval.interm).line = (yyvsp[0].lex).line; (yyval.interm).op = EOpExclusiveOrAssign; }
#line 3195 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 81: /* assignment_operator: OR_ASSIGN  */
#line 856 "hlslang/MachineIndependent/hlslang.y"
                   { UNSUPPORTED_FEATURE("|=",  (yyvsp[0].lex).line); (yyval.interm).line = (yyvsp[0].lex).line; (yyval.interm).op = EOpInclusiveOrAssign; }
#line 3201 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 82: /* expression: assign_expression  */
#line 860 "hlslang/MachineIndependent/hlslang.y"
                        {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 3209 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 83: /* expression: expression COMMA assign_expression  */
#line 863 "hlslang/MachineIndependent/hlslang.y"
                                         {
        (yyval.interm.intermTypedNode) = ir_add_comma((yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).line, ",", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            parseContext.recover();
            (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
        }
    }
#line 3222 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 84: /* const_expression: cond_expression  */
#line 874 "hlslang/MachineIndependent/hlslang.y"
                      {
        if (parseContext.constErrorCheck((yyvsp[0].interm.intermTypedNode)))
            parseContext.recover();
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 3232 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 85: /* declaration: function_prototype SEMICOLON  */
#line 882 "hlslang/MachineIndependent/hlslang.y"
                                     { (yyval.interm.intermDeclaration) = 0; }
#line 3238 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 86: /* declaration: init_declarator_list SEMICOLON  */
#line 883 "hlslang/MachineIndependent/hlslang.y"
                                     { (yyval.interm.intermDeclaration) = (yyvsp[-1].interm.intermDeclaration); }
#line 3244 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 87: /* function_prototype: function_declarator RIGHT_PAREN  */
#line 887 "hlslang/MachineIndependent/hlslang.y"
                                       {
        //
        // Multiple declarations of the same function are allowed.
        //
        // If this is a definition, the definition production code will check for redefinitions
        // (we don't know at this point if it's a definition or not).
        //
        // Redeclarations are allowed.  But, return types and parameter qualifiers must match.
        //
        TFunction* prevDec = static_cast<TFunction*>(parseContext.symbolTable.find((yyvsp[-1].interm.function)->getMangledName()));
        if (prevDec) {
            if (prevDec->getReturnType() != (yyvsp[-1].interm.function)->getReturnType()) {
                parseContext.error((yyvsp[0].lex).line, "overloaded functions must have the same return type", (yyvsp[-1].interm.function)->getReturnType().getBasicString(), "");
                parseContext.recover();
            }
            for (int i = 0; i < prevDec->getParamCount(); ++i) {
                if ((*prevDec)[i].type->getQualifier() != (*(yyvsp[-1].interm.function))[i].type->getQualifier()) {
                    parseContext.error((yyvsp[0].lex).line, "overloaded functions must have the same parameter qualifiers", (*(yyvsp[-1].interm.function))[i].type->getQualifierString(), "");
                    parseContext.recover();
                }
            }
        }

        //
        // If this is a redeclaration, it could also be a definition,
        // in which case, we want to use the variable names from this one, and not the one that's
        // being redeclared.  So, pass back up this declaration, not the one in the symbol table.
        //
        (yyval.interm).function = (yyvsp[-1].interm.function);
        (yyval.interm).line = (yyvsp[0].lex).line;

        parseContext.symbolTable.insert(*(yyval.interm).function);
    }
#line 3282 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 88: /* function_prototype: function_declarator RIGHT_PAREN COLON IDENTIFIER  */
#line 920 "hlslang/MachineIndependent/hlslang.y"
                                                       {
        //
        // Multiple declarations of the same function are allowed.
        //
        // If this is a definition, the definition production code will check for redefinitions
        // (we don't know at this point if it's a definition or not).
        //
        // Redeclarations are allowed.  But, return types and parameter qualifiers must match.
        //
        TFunction* prevDec = static_cast<TFunction*>(parseContext.symbolTable.find((yyvsp[-3].interm.function)->getMangledName()));
        if (prevDec) {
            if (prevDec->getReturnType() != (yyvsp[-3].interm.function)->getReturnType()) {
                parseContext.error((yyvsp[-2].lex).line, "overloaded functions must have the same return type", (yyvsp[-3].interm.function)->getReturnType().getBasicString(), "");
                parseContext.recover();
            }
            for (int i = 0; i < prevDec->getParamCount(); ++i) {
                if ((*prevDec)[i].type->getQualifier() != (*(yyvsp[-3].interm.function))[i].type->getQualifier()) {
                    parseContext.error((yyvsp[-2].lex).line, "overloaded functions must have the same parameter qualifiers", (*(yyvsp[-3].interm.function))[i].type->getQualifierString(), "");
                    parseContext.recover();
                }
            }
        }

        //
        // If this is a redeclaration, it could also be a definition,
        // in which case, we want to use the variable names from this one, and not the one that's
        // being redeclared.  So, pass back up this declaration, not the one in the symbol table.
        //
        (yyval.interm).function = (yyvsp[-3].interm.function);
        (yyval.interm).line = (yyvsp[-2].lex).line;
        (yyval.interm).function->setInfo(new TTypeInfo(*(yyvsp[0].lex).string, 0));

        parseContext.symbolTable.insert(*(yyval.interm).function);
    }
#line 3321 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 89: /* function_declarator: function_header  */
#line 957 "hlslang/MachineIndependent/hlslang.y"
                      {
        (yyval.interm.function) = (yyvsp[0].interm.function);
    }
#line 3329 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 90: /* function_declarator: function_header_with_parameters  */
#line 960 "hlslang/MachineIndependent/hlslang.y"
                                      {
        (yyval.interm.function) = (yyvsp[0].interm.function);
    }
#line 3337 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 91: /* function_header_with_parameters: function_header parameter_declaration  */
#line 967 "hlslang/MachineIndependent/hlslang.y"
                                            {
        // Add the parameter
        (yyval.interm.function) = (yyvsp[-1].interm.function);
        if ((yyvsp[0].interm).param.type->getBasicType() != EbtVoid)
            (yyvsp[-1].interm.function)->addParameter((yyvsp[0].interm).param);
        else
            delete (yyvsp[0].interm).param.type;
    }
#line 3350 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 92: /* function_header_with_parameters: function_header_with_parameters COMMA parameter_declaration  */
#line 975 "hlslang/MachineIndependent/hlslang.y"
                                                                  {
        //
        // Only first parameter of one-parameter functions can be void
        // The check for named parameters not being void is done in parameter_declarator
        //
        if ((yyvsp[0].interm).param.type->getBasicType() == EbtVoid) {
            //
            // This parameter > first is void
            //
            parseContext.error((yyvsp[-1].lex).line, "cannot be an argument type except for '(void)'", "void", "");
            parseContext.recover();
            delete (yyvsp[0].interm).param.type;
        } else {
            // Add the parameter
            (yyval.interm.function) = (yyvsp[-2].interm.function);
            (yyvsp[-2].interm.function)->addParameter((yyvsp[0].interm).param);
        }
    }
#line 3373 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 93: /* function_header: fully_specified_type IDENTIFIER LEFT_PAREN  */
#line 996 "hlslang/MachineIndependent/hlslang.y"
                                                 {
        if ((yyvsp[-2].interm.type).qualifier != EvqGlobal && (yyvsp[-2].interm.type).qualifier != EvqTemporary) {
			if ((yyvsp[-2].interm.type).qualifier == EvqConst || (yyvsp[-2].interm.type).qualifier == EvqStatic)
			{
				(yyvsp[-2].interm.type).qualifier = EvqTemporary;
			}
			else
			{
				parseContext.error((yyvsp[-1].lex).line, "no qualifiers allowed for function return", getQualifierString((yyvsp[-2].interm.type).qualifier), "");
				parseContext.recover();
			}
        }
        // make sure a sampler is not involved as well...
        if (parseContext.structQualifierErrorCheck((yyvsp[-1].lex).line, (yyvsp[-2].interm.type)))
            parseContext.recover();

        // Add the function as a prototype after parsing it (we do not support recursion)
        TFunction *function;
        TType type((yyvsp[-2].interm.type));
    const TString* mangled = 0;
    if ( *(yyvsp[-1].lex).string == "main")
        mangled = NewPoolTString( "xlat_main");
    else
        mangled = (yyvsp[-1].lex).string;

        function = new TFunction(mangled, type);
        (yyval.interm.function) = function;
    }
#line 3406 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 94: /* parameter_declarator: type_specifier IDENTIFIER  */
#line 1028 "hlslang/MachineIndependent/hlslang.y"
                                {
        if ((yyvsp[-1].interm.type).type == EbtVoid) {
            parseContext.error((yyvsp[0].lex).line, "illegal use of type 'void'", (yyvsp[0].lex).string->c_str(), "");
            parseContext.recover();
        }
        if (parseContext.reservedErrorCheck((yyvsp[0].lex).line, *(yyvsp[0].lex).string))
            parseContext.recover();
        TParameter param = {(yyvsp[0].lex).string, 0, new TType((yyvsp[-1].interm.type))};
        (yyval.interm).line = (yyvsp[0].lex).line;
        (yyval.interm).param = param;
    }
#line 3422 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 95: /* parameter_declarator: type_specifier IDENTIFIER EQUAL initializer  */
#line 1039 "hlslang/MachineIndependent/hlslang.y"
                                                  {
        if ((yyvsp[-3].interm.type).type == EbtVoid) {
            parseContext.error((yyvsp[-2].lex).line, "illegal use of type 'void'", (yyvsp[-2].lex).string->c_str(), "");
            parseContext.recover();
        }
        if (parseContext.reservedErrorCheck((yyvsp[-2].lex).line, *(yyvsp[-2].lex).string))
            parseContext.recover();
        TParameter param = {(yyvsp[-2].lex).string, 0, new TType((yyvsp[-3].interm.type))};
        (yyval.interm).line = (yyvsp[-2].lex).line;
        (yyval.interm).param = param;

        //TODO: add initializer support
    }
#line 3440 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 96: /* parameter_declarator: type_specifier IDENTIFIER register_specifier  */
#line 1052 "hlslang/MachineIndependent/hlslang.y"
                                                   {
        // Parameter with register
        if ((yyvsp[-2].interm.type).type == EbtVoid) {
            parseContext.error((yyvsp[-1].lex).line, "illegal use of type 'void'", (yyvsp[-1].lex).string->c_str(), "");
            parseContext.recover();
        }
        if (parseContext.reservedErrorCheck((yyvsp[-1].lex).line, *(yyvsp[-1].lex).string))
            parseContext.recover();
        TParameter param = {(yyvsp[-1].lex).string, new TTypeInfo("", *(yyvsp[0].lex).string, 0), new TType((yyvsp[-2].interm.type))};
        (yyval.interm).line = (yyvsp[-1].lex).line;
        (yyval.interm).param = param; 
    }
#line 3457 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 97: /* parameter_declarator: type_specifier IDENTIFIER COLON IDENTIFIER  */
#line 1064 "hlslang/MachineIndependent/hlslang.y"
                                                 {
        //Parameter with semantic
        if ((yyvsp[-3].interm.type).type == EbtVoid) {
            parseContext.error((yyvsp[-2].lex).line, "illegal use of type 'void'", (yyvsp[-2].lex).string->c_str(), "");
            parseContext.recover();
        }
        if (parseContext.reservedErrorCheck((yyvsp[-2].lex).line, *(yyvsp[-2].lex).string))
            parseContext.recover();
        TParameter param = {(yyvsp[-2].lex).string, new TTypeInfo(*(yyvsp[0].lex).string, 0), new TType((yyvsp[-3].interm.type))};
        (yyval.interm).line = (yyvsp[-2].lex).line;
        (yyval.interm).param = param;
    }
#line 3474 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 98: /* parameter_declarator: type_specifier IDENTIFIER LEFT_BRACKET const_expression RIGHT_BRACKET  */
#line 1076 "hlslang/MachineIndependent/hlslang.y"
                                                                            {
        // Check that we can make an array out of this type
        if (parseContext.arrayTypeErrorCheck((yyvsp[-2].lex).line, (yyvsp[-4].interm.type)))
            parseContext.recover();

        if (parseContext.reservedErrorCheck((yyvsp[-3].lex).line, *(yyvsp[-3].lex).string))
            parseContext.recover();

        int size;
        if (parseContext.arraySizeErrorCheck((yyvsp[-2].lex).line, (yyvsp[-1].interm.intermTypedNode), size))
            parseContext.recover();
        (yyvsp[-4].interm.type).setArray(true, size);

        TType* type = new TType((yyvsp[-4].interm.type));
        TParameter param = { (yyvsp[-3].lex).string, 0, type };
        (yyval.interm).line = (yyvsp[-3].lex).line;
        (yyval.interm).param = param;
    }
#line 3497 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 99: /* parameter_declarator: type_specifier IDENTIFIER LEFT_BRACKET const_expression RIGHT_BRACKET COLON IDENTIFIER  */
#line 1094 "hlslang/MachineIndependent/hlslang.y"
                                                                                             {
        // Check that we can make an array out of this type
        if (parseContext.arrayTypeErrorCheck((yyvsp[-4].lex).line, (yyvsp[-6].interm.type)))
            parseContext.recover();

        if (parseContext.reservedErrorCheck((yyvsp[-5].lex).line, *(yyvsp[-5].lex).string))
            parseContext.recover();

        int size;
        if (parseContext.arraySizeErrorCheck((yyvsp[-4].lex).line, (yyvsp[-3].interm.intermTypedNode), size))
            parseContext.recover();
        (yyvsp[-6].interm.type).setArray(true, size);

        TType* type = new TType((yyvsp[-6].interm.type));
        TParameter param = { (yyvsp[-5].lex).string, new TTypeInfo(*(yyvsp[0].lex).string, 0), type };
        (yyval.interm).line = (yyvsp[-5].lex).line;
        (yyval.interm).param = param;
    }
#line 3520 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 100: /* parameter_declaration: type_qualifier parameter_qualifier parameter_declarator  */
#line 1123 "hlslang/MachineIndependent/hlslang.y"
                                                              {
        (yyval.interm) = (yyvsp[0].interm);
        if (parseContext.paramErrorCheck((yyvsp[0].interm).line, (yyvsp[-2].interm.type).qualifier, (yyvsp[-1].interm.qualifier), (yyval.interm).param.type))
            parseContext.recover();
    }
#line 3530 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 101: /* parameter_declaration: parameter_qualifier parameter_declarator  */
#line 1128 "hlslang/MachineIndependent/hlslang.y"
                                               {
        (yyval.interm) = (yyvsp[0].interm);
        if (parseContext.parameterSamplerErrorCheck((yyvsp[0].interm).line, (yyvsp[-1].interm.qualifier), *(yyvsp[0].interm).param.type))
            parseContext.recover();
        if (parseContext.paramErrorCheck((yyvsp[0].interm).line, EvqTemporary, (yyvsp[-1].interm.qualifier), (yyval.interm).param.type))
            parseContext.recover();
    }
#line 3542 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 102: /* parameter_declaration: type_qualifier parameter_qualifier parameter_type_specifier  */
#line 1138 "hlslang/MachineIndependent/hlslang.y"
                                                                  {
        (yyval.interm) = (yyvsp[0].interm);
        if (parseContext.paramErrorCheck((yyvsp[0].interm).line, (yyvsp[-2].interm.type).qualifier, (yyvsp[-1].interm.qualifier), (yyval.interm).param.type))
            parseContext.recover();
    }
#line 3552 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 103: /* parameter_declaration: parameter_qualifier parameter_type_specifier  */
#line 1143 "hlslang/MachineIndependent/hlslang.y"
                                                   {
        (yyval.interm) = (yyvsp[0].interm);
        if (parseContext.parameterSamplerErrorCheck((yyvsp[0].interm).line, (yyvsp[-1].interm.qualifier), *(yyvsp[0].interm).param.type))
            parseContext.recover();
        if (parseContext.paramErrorCheck((yyvsp[0].interm).line, EvqTemporary, (yyvsp[-1].interm.qualifier), (yyval.interm).param.type))
            parseContext.recover();
    }
#line 3564 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 104: /* parameter_qualifier: %empty  */
#line 1153 "hlslang/MachineIndependent/hlslang.y"
                  {
        (yyval.interm.qualifier) = EvqIn;
    }
#line 3572 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 105: /* parameter_qualifier: IN_QUAL  */
#line 1156 "hlslang/MachineIndependent/hlslang.y"
              {
        (yyval.interm.qualifier) = EvqIn;
    }
#line 3580 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 106: /* parameter_qualifier: OUT_QUAL  */
#line 1159 "hlslang/MachineIndependent/hlslang.y"
               {
        (yyval.interm.qualifier) = EvqOut;
    }
#line 3588 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 107: /* parameter_qualifier: INOUT_QUAL  */
#line 1162 "hlslang/MachineIndependent/hlslang.y"
                 {
        (yyval.interm.qualifier) = EvqInOut;
    }
#line 3596 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 108: /* parameter_type_specifier: type_specifier  */
#line 1168 "hlslang/MachineIndependent/hlslang.y"
                     {
        TParameter param = { 0, 0, new TType((yyvsp[0].interm.type)) };
        (yyval.interm).param = param;
    }
#line 3605 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 109: /* init_declarator_list: single_declaration  */
#line 1175 "hlslang/MachineIndependent/hlslang.y"
                         {
        (yyval.interm.intermDeclaration) = (yyvsp[0].interm.intermDeclaration);
    }
#line 3613 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 110: /* init_declarator_list: init_declarator_list COMMA IDENTIFIER type_info  */
#line 1178 "hlslang/MachineIndependent/hlslang.y"
                                                      {
		TPublicType type = ir_get_decl_type_noarray((yyvsp[-3].interm.intermDeclaration));
		
        if (parseContext.structQualifierErrorCheck((yyvsp[-1].lex).line, type))
            parseContext.recover();
        
        if (parseContext.nonInitConstErrorCheck((yyvsp[-1].lex).line, *(yyvsp[-1].lex).string, type))
            parseContext.recover();

        if (parseContext.nonInitErrorCheck((yyvsp[-1].lex).line, *(yyvsp[-1].lex).string, (yyvsp[0].interm.typeInfo), type))
            parseContext.recover();
		
		TSymbol* sym = parseContext.symbolTable.find(*(yyvsp[-1].lex).string);
		if (!sym)
			(yyval.interm.intermDeclaration) = (yyvsp[-3].interm.intermDeclaration);
		else
			(yyval.interm.intermDeclaration) = ir_grow_declaration((yyvsp[-3].interm.intermDeclaration), sym, NULL, parseContext);
    }
#line 3636 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 111: /* init_declarator_list: init_declarator_list COMMA IDENTIFIER LEFT_BRACKET RIGHT_BRACKET type_info  */
#line 1196 "hlslang/MachineIndependent/hlslang.y"
                                                                                 {
		TPublicType type = ir_get_decl_type_noarray((yyvsp[-5].interm.intermDeclaration));
		
        if (parseContext.structQualifierErrorCheck((yyvsp[-3].lex).line, type))
            parseContext.recover();
            
        if (parseContext.nonInitConstErrorCheck((yyvsp[-3].lex).line, *(yyvsp[-3].lex).string, type))
            parseContext.recover();
        
        if (parseContext.arrayTypeErrorCheck((yyvsp[-2].lex).line, type) || parseContext.arrayQualifierErrorCheck((yyvsp[-2].lex).line, type))
            parseContext.recover();
        else {
            TVariable* variable;
            if (parseContext.arrayErrorCheck((yyvsp[-2].lex).line, *(yyvsp[-3].lex).string, (yyvsp[0].interm.typeInfo), type, variable))
                parseContext.recover();
		
			if (!variable)
				(yyval.interm.intermDeclaration) = (yyvsp[-5].interm.intermDeclaration);
			else {
				variable->getType().setArray(true);
				(yyval.interm.intermDeclaration) = ir_grow_declaration((yyvsp[-5].interm.intermDeclaration), variable, NULL, parseContext);
			}
        }
    }
#line 3665 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 112: /* init_declarator_list: init_declarator_list COMMA IDENTIFIER LEFT_BRACKET const_expression RIGHT_BRACKET type_info  */
#line 1220 "hlslang/MachineIndependent/hlslang.y"
                                                                                                  {
		TPublicType type = ir_get_decl_type_noarray((yyvsp[-6].interm.intermDeclaration));
		
        if (parseContext.structQualifierErrorCheck((yyvsp[-4].lex).line, type))
            parseContext.recover();
            
        if (parseContext.nonInitConstErrorCheck((yyvsp[-4].lex).line, *(yyvsp[-4].lex).string, type))
            parseContext.recover();

        if (parseContext.arrayTypeErrorCheck((yyvsp[-3].lex).line, type) || parseContext.arrayQualifierErrorCheck((yyvsp[-3].lex).line, type))
            parseContext.recover();
        else {
            int size;
            if (parseContext.arraySizeErrorCheck((yyvsp[-3].lex).line, (yyvsp[-2].interm.intermTypedNode), size))
                parseContext.recover();
            type.setArray(true, size);
			
            TVariable* variable;
            if (parseContext.arrayErrorCheck((yyvsp[-3].lex).line, *(yyvsp[-4].lex).string, (yyvsp[0].interm.typeInfo), type, variable))
                parseContext.recover();
			
			if (!variable)
				(yyval.interm.intermDeclaration) = (yyvsp[-6].interm.intermDeclaration);
			else {
				(yyval.interm.intermDeclaration) = ir_grow_declaration((yyvsp[-6].interm.intermDeclaration), variable, NULL, parseContext);
			}
        }
    }
#line 3698 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 113: /* init_declarator_list: init_declarator_list COMMA IDENTIFIER LEFT_BRACKET RIGHT_BRACKET type_info EQUAL initializer  */
#line 1248 "hlslang/MachineIndependent/hlslang.y"
                                                                                                   {
		TPublicType type = ir_get_decl_type_noarray((yyvsp[-7].interm.intermDeclaration));
		
        if (parseContext.structQualifierErrorCheck((yyvsp[-5].lex).line, type))
            parseContext.recover();
            
        TVariable* variable = 0;
        if (parseContext.arrayTypeErrorCheck((yyvsp[-4].lex).line, type) || parseContext.arrayQualifierErrorCheck((yyvsp[-4].lex).line, type))
            parseContext.recover();
        else if (parseContext.arrayErrorCheck((yyvsp[-4].lex).line, *(yyvsp[-5].lex).string, type, variable))
			parseContext.recover();
		
        {
            TIntermSymbol* symbol;
            type.setArray(true, (yyvsp[0].interm.intermTypedNode)->getType().getArraySize());
            if (!parseContext.executeInitializer((yyvsp[-5].lex).line, *(yyvsp[-5].lex).string, (yyvsp[-2].interm.typeInfo), type, (yyvsp[0].interm.intermTypedNode), symbol, variable)) {
                if (!variable)
					(yyval.interm.intermDeclaration) = (yyvsp[-7].interm.intermDeclaration);
				else {
					(yyval.interm.intermDeclaration) = ir_grow_declaration((yyvsp[-7].interm.intermDeclaration), variable, (yyvsp[0].interm.intermTypedNode), parseContext);
				}
            } else {
                parseContext.recover();
                (yyval.interm.intermDeclaration) = 0;
            }
        }
    }
#line 3730 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 114: /* init_declarator_list: init_declarator_list COMMA IDENTIFIER LEFT_BRACKET const_expression RIGHT_BRACKET type_info EQUAL initializer  */
#line 1275 "hlslang/MachineIndependent/hlslang.y"
                                                                                                                    {
		TPublicType type = ir_get_decl_type_noarray((yyvsp[-8].interm.intermDeclaration));
		int array_size;
		
        if (parseContext.structQualifierErrorCheck((yyvsp[-6].lex).line, type))
            parseContext.recover();
            
        TVariable* variable = 0;
        if (parseContext.arrayTypeErrorCheck((yyvsp[-5].lex).line, type) || parseContext.arrayQualifierErrorCheck((yyvsp[-5].lex).line, type))
            parseContext.recover();
        else {
            if (parseContext.arraySizeErrorCheck((yyvsp[-5].lex).line, (yyvsp[-4].interm.intermTypedNode), array_size))
                parseContext.recover();
			
            type.setArray(true, array_size);
            if (parseContext.arrayErrorCheck((yyvsp[-5].lex).line, *(yyvsp[-6].lex).string, (yyvsp[-2].interm.typeInfo), type, variable))
                parseContext.recover();
        }

        {
            TIntermSymbol* symbol;
            if (!parseContext.executeInitializer((yyvsp[-6].lex).line, *(yyvsp[-6].lex).string, (yyvsp[-2].interm.typeInfo), type, (yyvsp[0].interm.intermTypedNode), symbol, variable)) {
				if (!variable)
					(yyval.interm.intermDeclaration) = (yyvsp[-8].interm.intermDeclaration);
				else {
					(yyval.interm.intermDeclaration) = ir_grow_declaration((yyvsp[-8].interm.intermDeclaration), variable, (yyvsp[0].interm.intermTypedNode), parseContext);
				}
            } else {
                parseContext.recover();
                (yyval.interm.intermDeclaration) = 0;
            }
        }
    }
#line 3768 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 115: /* init_declarator_list: init_declarator_list COMMA IDENTIFIER type_info EQUAL initializer  */
#line 1308 "hlslang/MachineIndependent/hlslang.y"
                                                                        {
		TPublicType type = ir_get_decl_type_noarray((yyvsp[-5].interm.intermDeclaration));
		
        if (parseContext.structQualifierErrorCheck((yyvsp[-3].lex).line, type))
            parseContext.recover();
			
        TIntermSymbol* symbol;
		if ( !IsSampler(type.type)) {
			if (!parseContext.executeInitializer((yyvsp[-3].lex).line, *(yyvsp[-3].lex).string, (yyvsp[-2].interm.typeInfo), type, (yyvsp[0].interm.intermTypedNode), symbol)) {
				TSymbol* variable = parseContext.symbolTable.find(*(yyvsp[-3].lex).string);
				if (!variable)
					(yyval.interm.intermDeclaration) = (yyvsp[-5].interm.intermDeclaration);
				else 				
					(yyval.interm.intermDeclaration) = ir_grow_declaration((yyvsp[-5].interm.intermDeclaration), variable, (yyvsp[0].interm.intermTypedNode), parseContext);
			} else {
				parseContext.recover();
				(yyval.interm.intermDeclaration) = 0;
			}
		} else {
			//Special code to skip initializers for samplers
			(yyval.interm.intermDeclaration) = (yyvsp[-5].interm.intermDeclaration);
			if (parseContext.structQualifierErrorCheck((yyvsp[-3].lex).line, type))
				parseContext.recover();
			
			if (parseContext.nonInitConstErrorCheck((yyvsp[-3].lex).line, *(yyvsp[-3].lex).string, type))
				parseContext.recover();
			
			if (parseContext.nonInitErrorCheck((yyvsp[-3].lex).line, *(yyvsp[-3].lex).string, (yyvsp[-2].interm.typeInfo), type))
				parseContext.recover();
		}
	}
#line 3804 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 116: /* single_declaration: fully_specified_type  */
#line 1342 "hlslang/MachineIndependent/hlslang.y"
                           {
		(yyval.interm.intermDeclaration) = 0;
    }
#line 3812 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 117: /* single_declaration: fully_specified_type IDENTIFIER type_info  */
#line 1345 "hlslang/MachineIndependent/hlslang.y"
                                                {				
		bool error = false;
        if (error &= parseContext.structQualifierErrorCheck((yyvsp[-1].lex).line, (yyvsp[-2].interm.type)))
            parseContext.recover();
        
        if (error &= parseContext.nonInitConstErrorCheck((yyvsp[-1].lex).line, *(yyvsp[-1].lex).string, (yyvsp[-2].interm.type)))
            parseContext.recover();

        if (error &= parseContext.nonInitErrorCheck((yyvsp[-1].lex).line, *(yyvsp[-1].lex).string, (yyvsp[0].interm.typeInfo), (yyvsp[-2].interm.type)))
            parseContext.recover();
		
		TSymbol* symbol = parseContext.symbolTable.find(*(yyvsp[-1].lex).string);
		if (!error && symbol) {
			(yyval.interm.intermDeclaration) = ir_add_declaration(symbol, NULL, (yyvsp[-1].lex).line, parseContext);
		} else {
			(yyval.interm.intermDeclaration) = 0;
		}
    }
#line 3835 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 118: /* single_declaration: fully_specified_type IDENTIFIER LEFT_BRACKET RIGHT_BRACKET type_info  */
#line 1363 "hlslang/MachineIndependent/hlslang.y"
                                                                           {
        if (parseContext.structQualifierErrorCheck((yyvsp[-3].lex).line, (yyvsp[-4].interm.type)))
            parseContext.recover();

        if (parseContext.nonInitConstErrorCheck((yyvsp[-3].lex).line, *(yyvsp[-3].lex).string, (yyvsp[-4].interm.type)))
            parseContext.recover();

        if (parseContext.arrayTypeErrorCheck((yyvsp[-2].lex).line, (yyvsp[-4].interm.type)) || parseContext.arrayQualifierErrorCheck((yyvsp[-2].lex).line, (yyvsp[-4].interm.type)))
            parseContext.recover();
        else {
            (yyvsp[-4].interm.type).setArray(true);
            TVariable* variable;
            if (parseContext.arrayErrorCheck((yyvsp[-2].lex).line, *(yyvsp[-3].lex).string, (yyvsp[0].interm.typeInfo), (yyvsp[-4].interm.type), variable))
                parseContext.recover();
        }
		
		TSymbol* symbol = parseContext.symbolTable.find(*(yyvsp[-3].lex).string);
		if (symbol) {
			(yyval.interm.intermDeclaration) = ir_add_declaration(symbol, NULL, (yyvsp[-3].lex).line, parseContext);
		} else {
			(yyval.interm.intermDeclaration) = 0;
		}
    }
#line 3863 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 119: /* single_declaration: fully_specified_type IDENTIFIER LEFT_BRACKET const_expression RIGHT_BRACKET type_info  */
#line 1386 "hlslang/MachineIndependent/hlslang.y"
                                                                                            {
        if (parseContext.structQualifierErrorCheck((yyvsp[-4].lex).line, (yyvsp[-5].interm.type)))
            parseContext.recover();

        if (parseContext.nonInitConstErrorCheck((yyvsp[-4].lex).line, *(yyvsp[-4].lex).string, (yyvsp[-5].interm.type)))
			parseContext.recover();
		
		TVariable* variable;
        if (parseContext.arrayTypeErrorCheck((yyvsp[-3].lex).line, (yyvsp[-5].interm.type)) || parseContext.arrayQualifierErrorCheck((yyvsp[-3].lex).line, (yyvsp[-5].interm.type)))
            parseContext.recover();
        else {
            int size;
            if (parseContext.arraySizeErrorCheck((yyvsp[-3].lex).line, (yyvsp[-2].interm.intermTypedNode), size))
                parseContext.recover();

            (yyvsp[-5].interm.type).setArray(true, size);
            if (parseContext.arrayErrorCheck((yyvsp[-3].lex).line, *(yyvsp[-4].lex).string, (yyvsp[0].interm.typeInfo), (yyvsp[-5].interm.type), variable))
                parseContext.recover();
			
			if (variable) {
				(yyval.interm.intermDeclaration) = ir_add_declaration(variable, NULL, (yyvsp[-4].lex).line, parseContext);
			} else {
				(yyval.interm.intermDeclaration) = 0;
			}
        }
	}
#line 3894 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 120: /* single_declaration: fully_specified_type IDENTIFIER LEFT_BRACKET RIGHT_BRACKET type_info EQUAL initializer  */
#line 1412 "hlslang/MachineIndependent/hlslang.y"
                                                                                             {
		if (parseContext.structQualifierErrorCheck((yyvsp[-5].lex).line, (yyvsp[-6].interm.type)))
			parseContext.recover();

		TVariable* variable = 0;
		if (parseContext.arrayTypeErrorCheck((yyvsp[-4].lex).line, (yyvsp[-6].interm.type)) || parseContext.arrayQualifierErrorCheck((yyvsp[-4].lex).line, (yyvsp[-6].interm.type)))
			parseContext.recover();
		else {
			(yyvsp[-6].interm.type).setArray(true, (yyvsp[0].interm.intermTypedNode)->getType().getArraySize());
			if (parseContext.arrayErrorCheck((yyvsp[-4].lex).line, *(yyvsp[-5].lex).string, (yyvsp[-2].interm.typeInfo), (yyvsp[-6].interm.type), variable))
				parseContext.recover();
		}

		{        
			TIntermSymbol* symbol;
			if (!parseContext.executeInitializer((yyvsp[-5].lex).line, *(yyvsp[-5].lex).string, (yyvsp[-2].interm.typeInfo), (yyvsp[-6].interm.type), (yyvsp[0].interm.intermTypedNode), symbol, variable)) {
				if (variable)
					(yyval.interm.intermDeclaration) = ir_add_declaration(symbol, (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, parseContext);
				else
					(yyval.interm.intermDeclaration) = 0;
			} else {
				parseContext.recover();
				(yyval.interm.intermDeclaration) = 0;
			}
		}
    }
#line 3925 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 121: /* single_declaration: fully_specified_type IDENTIFIER LEFT_BRACKET const_expression RIGHT_BRACKET type_info EQUAL initializer  */
#line 1438 "hlslang/MachineIndependent/hlslang.y"
                                                                                                              {
        if (parseContext.structQualifierErrorCheck((yyvsp[-6].lex).line, (yyvsp[-7].interm.type)))
            parseContext.recover();

        TVariable* variable = 0;
        if (parseContext.arrayTypeErrorCheck((yyvsp[-5].lex).line, (yyvsp[-7].interm.type)) || parseContext.arrayQualifierErrorCheck((yyvsp[-5].lex).line, (yyvsp[-7].interm.type)))
            parseContext.recover();
        else {
            int size;
            if (parseContext.arraySizeErrorCheck((yyvsp[-5].lex).line, (yyvsp[-4].interm.intermTypedNode), size))
                parseContext.recover();

            (yyvsp[-7].interm.type).setArray(true, size);
            if (parseContext.arrayErrorCheck((yyvsp[-5].lex).line, *(yyvsp[-6].lex).string, (yyvsp[-2].interm.typeInfo), (yyvsp[-7].interm.type), variable))
                parseContext.recover();
        }
        
		{        
			TIntermSymbol* symbol;
			if (!parseContext.executeInitializer((yyvsp[-6].lex).line, *(yyvsp[-6].lex).string, (yyvsp[-2].interm.typeInfo), (yyvsp[-7].interm.type), (yyvsp[0].interm.intermTypedNode), symbol, variable)) {
				if (variable)
					(yyval.interm.intermDeclaration) = ir_add_declaration(symbol, (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, parseContext);
				else
					(yyval.interm.intermDeclaration) = 0;
			} else {
				parseContext.recover();
				(yyval.interm.intermDeclaration) = 0;
			}
		}       
    }
#line 3960 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 122: /* single_declaration: fully_specified_type IDENTIFIER type_info EQUAL initializer  */
#line 1468 "hlslang/MachineIndependent/hlslang.y"
                                                                  {
		if (parseContext.structQualifierErrorCheck((yyvsp[-3].lex).line, (yyvsp[-4].interm.type)))
			parseContext.recover();
		
		if (!IsSampler((yyvsp[-4].interm.type).type)) {
			TIntermSymbol* symbol;
			if (!parseContext.executeInitializer((yyvsp[-3].lex).line, *(yyvsp[-3].lex).string, (yyvsp[-2].interm.typeInfo), (yyvsp[-4].interm.type), (yyvsp[0].interm.intermTypedNode), symbol)) {
				if (symbol)
					(yyval.interm.intermDeclaration) = ir_add_declaration(symbol, (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).line, parseContext);
				else
					(yyval.interm.intermDeclaration) = 0;
			} else {
				parseContext.recover();
				(yyval.interm.intermDeclaration) = 0;
			}
		} else {
			if (parseContext.structQualifierErrorCheck((yyvsp[-3].lex).line, (yyvsp[-4].interm.type)))
				parseContext.recover();

			if (parseContext.nonInitConstErrorCheck((yyvsp[-3].lex).line, *(yyvsp[-3].lex).string, (yyvsp[-4].interm.type)))
				parseContext.recover();

			if (parseContext.nonInitErrorCheck((yyvsp[-3].lex).line, *(yyvsp[-3].lex).string, (yyvsp[-2].interm.typeInfo), (yyvsp[-4].interm.type)))
				parseContext.recover();
				
			TSymbol* symbol = parseContext.symbolTable.find(*(yyvsp[-3].lex).string);
			if (symbol) {
				(yyval.interm.intermDeclaration) = ir_add_declaration(symbol, NULL, (yyvsp[-3].lex).line, parseContext);
			} else {
				(yyval.interm.intermDeclaration) = 0;
			}
		}
    }
#line 3998 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 123: /* fully_specified_type: type_specifier  */
#line 1516 "hlslang/MachineIndependent/hlslang.y"
                     {
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 4006 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 124: /* fully_specified_type: type_qualifier type_specifier  */
#line 1519 "hlslang/MachineIndependent/hlslang.y"
                                     {
        if ((yyvsp[0].interm.type).array && parseContext.arrayQualifierErrorCheck((yyvsp[0].interm.type).line, (yyvsp[-1].interm.type))) {
            parseContext.recover();
            (yyvsp[0].interm.type).setArray(false);
        }

        if ((yyvsp[-1].interm.type).qualifier == EvqAttribute &&
            ((yyvsp[0].interm.type).type == EbtBool || (yyvsp[0].interm.type).type == EbtInt)) {
            parseContext.error((yyvsp[0].interm.type).line, "cannot be bool or int", getQualifierString((yyvsp[-1].interm.type).qualifier), "");
            parseContext.recover();
        }
        (yyval.interm.type) = (yyvsp[0].interm.type); 
        (yyval.interm.type).qualifier = (yyvsp[-1].interm.type).qualifier;
    }
#line 4025 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 125: /* type_qualifier: CONST_QUAL  */
#line 1536 "hlslang/MachineIndependent/hlslang.y"
                 {
        (yyval.interm.type).setBasic(EbtVoid, EvqConst, (yyvsp[0].lex).line);
    }
#line 4033 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 126: /* type_qualifier: STATIC_QUAL  */
#line 1539 "hlslang/MachineIndependent/hlslang.y"
                  {
        (yyval.interm.type).setBasic(EbtVoid, EvqStatic, (yyvsp[0].lex).line);
    }
#line 4041 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 127: /* type_qualifier: STATIC_QUAL CONST_QUAL  */
#line 1542 "hlslang/MachineIndependent/hlslang.y"
                             {
        (yyval.interm.type).setBasic(EbtVoid, EvqConst, (yyvsp[-1].lex).line); // same as "const" really
    }
#line 4049 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 128: /* type_qualifier: CONST_QUAL STATIC_QUAL  */
#line 1545 "hlslang/MachineIndependent/hlslang.y"
                             {
        (yyval.interm.type).setBasic(EbtVoid, EvqConst, (yyvsp[-1].lex).line); // same as "const" really
    }
#line 4057 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 129: /* type_qualifier: UNIFORM  */
#line 1548 "hlslang/MachineIndependent/hlslang.y"
              {
        if (parseContext.globalErrorCheck((yyvsp[0].lex).line, parseContext.symbolTable.atGlobalLevel(), "uniform"))
            parseContext.recover();
        (yyval.interm.type).setBasic(EbtVoid, EvqUniform, (yyvsp[0].lex).line);
    }
#line 4067 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 130: /* type_specifier: type_specifier_nonarray  */
#line 1556 "hlslang/MachineIndependent/hlslang.y"
                              {
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 4075 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 131: /* type_specifier: type_specifier_nonarray LEFT_BRACKET const_expression RIGHT_BRACKET  */
#line 1559 "hlslang/MachineIndependent/hlslang.y"
                                                                          {
        (yyval.interm.type) = (yyvsp[-3].interm.type);

        if (parseContext.arrayTypeErrorCheck((yyvsp[-2].lex).line, (yyvsp[-3].interm.type)))
            parseContext.recover();
        else {
            int size;
            if (parseContext.arraySizeErrorCheck((yyvsp[-2].lex).line, (yyvsp[-1].interm.intermTypedNode), size))
                parseContext.recover();
            (yyval.interm.type).setArray(true, size);
        }
    }
#line 4092 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 132: /* type_specifier_nonarray: VOID_TYPE  */
#line 1574 "hlslang/MachineIndependent/hlslang.y"
                {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtVoid,EbpUndefined);
    }
#line 4100 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 133: /* type_specifier_nonarray: FLOAT_TYPE  */
#line 1577 "hlslang/MachineIndependent/hlslang.y"
                 {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpHigh);
    }
#line 4108 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 134: /* type_specifier_nonarray: HALF_TYPE  */
#line 1580 "hlslang/MachineIndependent/hlslang.y"
                {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpMedium);
    }
#line 4116 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 135: /* type_specifier_nonarray: FIXED_TYPE  */
#line 1583 "hlslang/MachineIndependent/hlslang.y"
                 {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpLow);
    }
#line 4124 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 136: /* type_specifier_nonarray: INT_TYPE  */
#line 1586 "hlslang/MachineIndependent/hlslang.y"
               {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtInt,EbpHigh);
    }
#line 4132 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 137: /* type_specifier_nonarray: BOOL_TYPE  */
#line 1589 "hlslang/MachineIndependent/hlslang.y"
                {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtBool,EbpHigh);
    }
#line 4140 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 138: /* type_specifier_nonarray: VECTOR LEFT_ANGLE FLOAT_TYPE COMMA INTCONSTANT RIGHT_ANGLE  */
#line 1592 "hlslang/MachineIndependent/hlslang.y"
                                                                 {
        TQualifier qual = parseContext.getDefaultQualifier();
        if ( (yyvsp[-1].lex).i > 4 || (yyvsp[-1].lex).i < 1 ) {
            parseContext.error((yyvsp[-4].lex).line, "vector dimension out of range", "", "");
            parseContext.recover();
            (yyval.interm.type).setBasic(EbtFloat, qual, (yyvsp[-5].lex).line);
        } else {
            (yyval.interm.type).setBasic(EbtFloat, qual, (yyvsp[-5].lex).line);
            (yyval.interm.type).setVector((yyvsp[-1].lex).i);
        }
    }
#line 4156 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 139: /* type_specifier_nonarray: VECTOR LEFT_ANGLE INT_TYPE COMMA INTCONSTANT RIGHT_ANGLE  */
#line 1603 "hlslang/MachineIndependent/hlslang.y"
                                                               {
        TQualifier qual = parseContext.getDefaultQualifier();
        if ( (yyvsp[-1].lex).i > 4 || (yyvsp[-1].lex).i < 1 ) {
            parseContext.error((yyvsp[-4].lex).line, "vector dimension out of range", "", "");
            parseContext.recover();
            (yyval.interm.type).setBasic(EbtInt, qual, (yyvsp[-5].lex).line);
        } else {
            (yyval.interm.type).setBasic(EbtInt, qual, (yyvsp[-5].lex).line);
            (yyval.interm.type).setVector((yyvsp[-1].lex).i);
        }
    }
#line 4172 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 140: /* type_specifier_nonarray: VECTOR LEFT_ANGLE BOOL_TYPE COMMA INTCONSTANT RIGHT_ANGLE  */
#line 1614 "hlslang/MachineIndependent/hlslang.y"
                                                                {
        TQualifier qual = parseContext.getDefaultQualifier();
        if ( (yyvsp[-1].lex).i > 4 || (yyvsp[-1].lex).i < 1 ) {
            parseContext.error((yyvsp[-4].lex).line, "vector dimension out of range", "", "");
            parseContext.recover();
            (yyval.interm.type).setBasic(EbtBool, qual, (yyvsp[-5].lex).line);
        } else {
            (yyval.interm.type).setBasic(EbtBool, qual, (yyvsp[-5].lex).line);
            (yyval.interm.type).setVector((yyvsp[-1].lex).i);
        }
    }
#line 4188 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 141: /* type_specifier_nonarray: VEC2  */
#line 1625 "hlslang/MachineIndependent/hlslang.y"
           {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpHigh);
        (yyval.interm.type).setVector(2);
    }
#line 4197 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 142: /* type_specifier_nonarray: VEC3  */
#line 1629 "hlslang/MachineIndependent/hlslang.y"
           {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpHigh);
        (yyval.interm.type).setVector(3);
    }
#line 4206 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 143: /* type_specifier_nonarray: VEC4  */
#line 1633 "hlslang/MachineIndependent/hlslang.y"
           {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpHigh);
        (yyval.interm.type).setVector(4);
    }
#line 4215 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 144: /* type_specifier_nonarray: HVEC2  */
#line 1637 "hlslang/MachineIndependent/hlslang.y"
            {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpMedium);
        (yyval.interm.type).setVector(2);
    }
#line 4224 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 145: /* type_specifier_nonarray: HVEC3  */
#line 1641 "hlslang/MachineIndependent/hlslang.y"
            {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpMedium);
        (yyval.interm.type).setVector(3);
    }
#line 4233 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 146: /* type_specifier_nonarray: HVEC4  */
#line 1645 "hlslang/MachineIndependent/hlslang.y"
            {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpMedium);
        (yyval.interm.type).setVector(4);
    }
#line 4242 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 147: /* type_specifier_nonarray: FVEC2  */
#line 1649 "hlslang/MachineIndependent/hlslang.y"
            {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpLow);
        (yyval.interm.type).setVector(2);
    }
#line 4251 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 148: /* type_specifier_nonarray: FVEC3  */
#line 1653 "hlslang/MachineIndependent/hlslang.y"
            {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpLow);
        (yyval.interm.type).setVector(3);
    }
#line 4260 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 149: /* type_specifier_nonarray: FVEC4  */
#line 1657 "hlslang/MachineIndependent/hlslang.y"
            {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpLow);
        (yyval.interm.type).setVector(4);
    }
#line 4269 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 150: /* type_specifier_nonarray: BVEC2  */
#line 1661 "hlslang/MachineIndependent/hlslang.y"
            {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtBool,EbpHigh);
        (yyval.interm.type).setVector(2);
    }
#line 4278 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 151: /* type_specifier_nonarray: BVEC3  */
#line 1665 "hlslang/MachineIndependent/hlslang.y"
            {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtBool,EbpHigh);
        (yyval.interm.type).setVector(3);
    }
#line 4287 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 152: /* type_specifier_nonarray: BVEC4  */
#line 1669 "hlslang/MachineIndependent/hlslang.y"
            {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtBool,EbpHigh);
        (yyval.interm.type).setVector(4);
    }
#line 4296 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 153: /* type_specifier_nonarray: IVEC2  */
#line 1673 "hlslang/MachineIndependent/hlslang.y"
            {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtInt,EbpHigh);
        (yyval.interm.type).setVector(2);
    }
#line 4305 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 154: /* type_specifier_nonarray: IVEC3  */
#line 1677 "hlslang/MachineIndependent/hlslang.y"
            {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtInt,EbpHigh);
        (yyval.interm.type).setVector(3);
    }
#line 4314 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 155: /* type_specifier_nonarray: IVEC4  */
#line 1681 "hlslang/MachineIndependent/hlslang.y"
            {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtInt,EbpHigh);
        (yyval.interm.type).setVector(4);
    }
#line 4323 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 156: /* type_specifier_nonarray: MATRIX2x2  */
#line 1685 "hlslang/MachineIndependent/hlslang.y"
                {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpHigh);
        (yyval.interm.type).setMatrix(2, 2);
    }
#line 4332 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 157: /* type_specifier_nonarray: MATRIX2x3  */
#line 1689 "hlslang/MachineIndependent/hlslang.y"
                {
		NONSQUARE_MATRIX_CHECK("float2x3", (yyvsp[0].lex).line);
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpHigh);
        (yyval.interm.type).setMatrix(3, 2);
    }
#line 4342 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 158: /* type_specifier_nonarray: MATRIX2x4  */
#line 1694 "hlslang/MachineIndependent/hlslang.y"
                {
		NONSQUARE_MATRIX_CHECK("float2x4", (yyvsp[0].lex).line);
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpHigh);
        (yyval.interm.type).setMatrix(4, 2);
    }
#line 4352 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 159: /* type_specifier_nonarray: MATRIX3x2  */
#line 1699 "hlslang/MachineIndependent/hlslang.y"
                {
		NONSQUARE_MATRIX_CHECK("float3x2", (yyvsp[0].lex).line);
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpHigh);
        (yyval.interm.type).setMatrix(2, 3);
    }
#line 4362 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 160: /* type_specifier_nonarray: MATRIX3x3  */
#line 1704 "hlslang/MachineIndependent/hlslang.y"
                {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpHigh);
        (yyval.interm.type).setMatrix(3, 3);
    }
#line 4371 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 161: /* type_specifier_nonarray: MATRIX3x4  */
#line 1708 "hlslang/MachineIndependent/hlslang.y"
                {
		NONSQUARE_MATRIX_CHECK("float3x4", (yyvsp[0].lex).line);
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpHigh);
        (yyval.interm.type).setMatrix(4, 3);
    }
#line 4381 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 162: /* type_specifier_nonarray: MATRIX4x2  */
#line 1713 "hlslang/MachineIndependent/hlslang.y"
                {
		NONSQUARE_MATRIX_CHECK("float4x2", (yyvsp[0].lex).line);
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpHigh);
        (yyval.interm.type).setMatrix(2, 4);
    }
#line 4391 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 163: /* type_specifier_nonarray: MATRIX4x3  */
#line 1718 "hlslang/MachineIndependent/hlslang.y"
                {
		NONSQUARE_MATRIX_CHECK("float4x3", (yyvsp[0].lex).line);
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpHigh);
        (yyval.interm.type).setMatrix(3, 4);
    }
#line 4401 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 164: /* type_specifier_nonarray: MATRIX4x4  */
#line 1723 "hlslang/MachineIndependent/hlslang.y"
                {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpHigh);
        (yyval.interm.type).setMatrix(4, 4);
    }
#line 4410 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 165: /* type_specifier_nonarray: HMATRIX2x2  */
#line 1727 "hlslang/MachineIndependent/hlslang.y"
                 {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpMedium);
        (yyval.interm.type).setMatrix(2, 2);
    }
#line 4419 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 166: /* type_specifier_nonarray: HMATRIX2x3  */
#line 1731 "hlslang/MachineIndependent/hlslang.y"
                 {
		NONSQUARE_MATRIX_CHECK("half2x3", (yyvsp[0].lex).line);
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpMedium);
        (yyval.interm.type).setMatrix(3, 2);
    }
#line 4429 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 167: /* type_specifier_nonarray: HMATRIX2x4  */
#line 1736 "hlslang/MachineIndependent/hlslang.y"
                 {
		NONSQUARE_MATRIX_CHECK("half2x4", (yyvsp[0].lex).line);
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpMedium);
        (yyval.interm.type).setMatrix(4, 2);
    }
#line 4439 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 168: /* type_specifier_nonarray: HMATRIX3x2  */
#line 1741 "hlslang/MachineIndependent/hlslang.y"
                 {
		NONSQUARE_MATRIX_CHECK("half3x2", (yyvsp[0].lex).line);
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpMedium);
        (yyval.interm.type).setMatrix(2, 3);
    }
#line 4449 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 169: /* type_specifier_nonarray: HMATRIX3x3  */
#line 1746 "hlslang/MachineIndependent/hlslang.y"
                 {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpMedium);
        (yyval.interm.type).setMatrix(3, 3);
    }
#line 4458 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 170: /* type_specifier_nonarray: HMATRIX3x4  */
#line 1750 "hlslang/MachineIndependent/hlslang.y"
                 {
		NONSQUARE_MATRIX_CHECK("half3x4", (yyvsp[0].lex).line);
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpMedium);
        (yyval.interm.type).setMatrix(4, 3);
    }
#line 4468 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 171: /* type_specifier_nonarray: HMATRIX4x2  */
#line 1755 "hlslang/MachineIndependent/hlslang.y"
                 {
		NONSQUARE_MATRIX_CHECK("half4x2", (yyvsp[0].lex).line);
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpMedium);
        (yyval.interm.type).setMatrix(2, 4);
    }
#line 4478 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 172: /* type_specifier_nonarray: HMATRIX4x3  */
#line 1760 "hlslang/MachineIndependent/hlslang.y"
                 {
		NONSQUARE_MATRIX_CHECK("half4x3", (yyvsp[0].lex).line);
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpMedium);
        (yyval.interm.type).setMatrix(3, 4);
    }
#line 4488 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 173: /* type_specifier_nonarray: HMATRIX4x4  */
#line 1765 "hlslang/MachineIndependent/hlslang.y"
                 {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpMedium);
        (yyval.interm.type).setMatrix(4, 4);
    }
#line 4497 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 174: /* type_specifier_nonarray: FMATRIX2x2  */
#line 1769 "hlslang/MachineIndependent/hlslang.y"
                 {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpLow);
        (yyval.interm.type).setMatrix(2, 2);
    }
#line 4506 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 175: /* type_specifier_nonarray: FMATRIX2x3  */
#line 1773 "hlslang/MachineIndependent/hlslang.y"
                 {
		NONSQUARE_MATRIX_CHECK("fixed2x3", (yyvsp[0].lex).line);
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpLow);
        (yyval.interm.type).setMatrix(3, 2);
    }
#line 4516 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 176: /* type_specifier_nonarray: FMATRIX2x4  */
#line 1778 "hlslang/MachineIndependent/hlslang.y"
                 {
		NONSQUARE_MATRIX_CHECK("fixed2x4", (yyvsp[0].lex).line);
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpLow);
        (yyval.interm.type).setMatrix(4, 2);
    }
#line 4526 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 177: /* type_specifier_nonarray: FMATRIX3x2  */
#line 1783 "hlslang/MachineIndependent/hlslang.y"
                 {
		NONSQUARE_MATRIX_CHECK("fixed3x2", (yyvsp[0].lex).line);
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpLow);
        (yyval.interm.type).setMatrix(2, 3);
    }
#line 4536 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 178: /* type_specifier_nonarray: FMATRIX3x3  */
#line 1788 "hlslang/MachineIndependent/hlslang.y"
                 {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpLow);
        (yyval.interm.type).setMatrix(3, 3);
    }
#line 4545 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 179: /* type_specifier_nonarray: FMATRIX3x4  */
#line 1792 "hlslang/MachineIndependent/hlslang.y"
                 {
		NONSQUARE_MATRIX_CHECK("fixed3x4", (yyvsp[0].lex).line);
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpLow);
        (yyval.interm.type).setMatrix(4, 3);
    }
#line 4555 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 180: /* type_specifier_nonarray: FMATRIX4x2  */
#line 1797 "hlslang/MachineIndependent/hlslang.y"
                 {
		NONSQUARE_MATRIX_CHECK("fixed4x2", (yyvsp[0].lex).line);
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpLow);
        (yyval.interm.type).setMatrix(2, 4);
    }
#line 4565 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 181: /* type_specifier_nonarray: FMATRIX4x3  */
#line 1802 "hlslang/MachineIndependent/hlslang.y"
                 {
		NONSQUARE_MATRIX_CHECK("fixed4x3", (yyvsp[0].lex).line);
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpLow);
        (yyval.interm.type).setMatrix(3, 4);
    }
#line 4575 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 182: /* type_specifier_nonarray: FMATRIX4x4  */
#line 1807 "hlslang/MachineIndependent/hlslang.y"
                 {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtFloat,EbpLow);
        (yyval.interm.type).setMatrix(4, 4);
    }
#line 4584 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 183: /* type_specifier_nonarray: TEXTURE  */
#line 1811 "hlslang/MachineIndependent/hlslang.y"
                  {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtTexture,EbpUndefined);
    }
#line 4592 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 184: /* type_specifier_nonarray: SAMPLERGENERIC  */
#line 1814 "hlslang/MachineIndependent/hlslang.y"
                     {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtSamplerGeneric,EbpUndefined);
    }
#line 4600 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 185: /* type_specifier_nonarray: SAMPLER1D  */
#line 1817 "hlslang/MachineIndependent/hlslang.y"
                {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtSampler1D,EbpUndefined);
    }
#line 4608 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 186: /* type_specifier_nonarray: SAMPLER2D  */
#line 1820 "hlslang/MachineIndependent/hlslang.y"
                {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtSampler2D,EbpUndefined);
    }
#line 4616 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 187: /* type_specifier_nonarray: SAMPLER2D_HALF  */
#line 1823 "hlslang/MachineIndependent/hlslang.y"
                         {
		SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtSampler2D,EbpMedium);
	}
#line 4624 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 188: /* type_specifier_nonarray: SAMPLER2D_FLOAT  */
#line 1826 "hlslang/MachineIndependent/hlslang.y"
                          {
		SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtSampler2D,EbpHigh);
	}
#line 4632 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 189: /* type_specifier_nonarray: SAMPLER3D  */
#line 1829 "hlslang/MachineIndependent/hlslang.y"
                {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtSampler3D,EbpLow);
    }
#line 4640 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 190: /* type_specifier_nonarray: SAMPLERCUBE  */
#line 1832 "hlslang/MachineIndependent/hlslang.y"
                  {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtSamplerCube,EbpUndefined);
    }
#line 4648 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 191: /* type_specifier_nonarray: SAMPLERCUBE_HALF  */
#line 1835 "hlslang/MachineIndependent/hlslang.y"
                           {
		SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtSamplerCube,EbpMedium);
	}
#line 4656 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 192: /* type_specifier_nonarray: SAMPLERCUBE_FLOAT  */
#line 1838 "hlslang/MachineIndependent/hlslang.y"
                            {
		SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtSamplerCube,EbpHigh);
	}
#line 4664 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 193: /* type_specifier_nonarray: SAMPLERRECT  */
#line 1841 "hlslang/MachineIndependent/hlslang.y"
                  {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtSamplerRect,EbpUndefined);
    }
#line 4672 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 194: /* type_specifier_nonarray: SAMPLERRECTSHADOW  */
#line 1844 "hlslang/MachineIndependent/hlslang.y"
                        {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtSamplerRectShadow,EbpLow); // ES3 doesn't have default precision for shadow samplers, so always emit lowp
    }
#line 4680 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 195: /* type_specifier_nonarray: SAMPLER1DSHADOW  */
#line 1847 "hlslang/MachineIndependent/hlslang.y"
                      {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtSampler1DShadow,EbpLow); // ES3 doesn't have default precision for shadow samplers, so always emit lowp
    }
#line 4688 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 196: /* type_specifier_nonarray: SAMPLER2DSHADOW  */
#line 1850 "hlslang/MachineIndependent/hlslang.y"
                      {
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtSampler2DShadow,EbpLow); // ES3 doesn't have default precision for shadow samplers, so always emit lowp
    }
#line 4696 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 197: /* type_specifier_nonarray: SAMPLER2DARRAY  */
#line 1853 "hlslang/MachineIndependent/hlslang.y"
                         {
		SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtSampler2DArray,EbpLow);
	}
#line 4704 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 198: /* type_specifier_nonarray: struct_specifier  */
#line 1856 "hlslang/MachineIndependent/hlslang.y"
                       {
        (yyval.interm.type) = (yyvsp[0].interm.type);
        (yyval.interm.type).qualifier = parseContext.getDefaultQualifier();
    }
#line 4713 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 199: /* type_specifier_nonarray: TYPE_NAME  */
#line 1860 "hlslang/MachineIndependent/hlslang.y"
                {
        //
        // This is for user defined type names.  The lexical phase looked up the
        // type.
        //
        TType& structure = static_cast<TVariable*>((yyvsp[0].lex).symbol)->getType();
        SET_BASIC_TYPE((yyval.interm.type),(yyvsp[0].lex),EbtStruct,EbpUndefined);
        (yyval.interm.type).userDef = &structure;
    }
#line 4727 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 200: /* struct_specifier: STRUCT IDENTIFIER LEFT_BRACE struct_declaration_list RIGHT_BRACE  */
#line 1872 "hlslang/MachineIndependent/hlslang.y"
                                                                       {
        TType* structure = new TType((yyvsp[-1].interm.typeList), *(yyvsp[-3].lex).string, EbpUndefined, (yyvsp[-3].lex).line);
        TVariable* userTypeDef = new TVariable((yyvsp[-3].lex).string, *structure, true);
        if (! parseContext.symbolTable.insert(*userTypeDef)) {
            parseContext.error((yyvsp[-3].lex).line, "redefinition", (yyvsp[-3].lex).string->c_str(), "struct");
            parseContext.recover();
        }
        (yyval.interm.type).setBasic(EbtStruct, EvqTemporary, (yyvsp[-4].lex).line);
        (yyval.interm.type).userDef = structure;
    }
#line 4742 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 201: /* struct_specifier: STRUCT LEFT_BRACE struct_declaration_list RIGHT_BRACE  */
#line 1882 "hlslang/MachineIndependent/hlslang.y"
                                                            {
        TType* structure = new TType((yyvsp[-1].interm.typeList), TString(""), EbpUndefined, (yyvsp[-3].lex).line);
        (yyval.interm.type).setBasic(EbtStruct, EvqTemporary, (yyvsp[-3].lex).line);
        (yyval.interm.type).userDef = structure;
    }
#line 4752 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 202: /* struct_declaration_list: struct_declaration  */
#line 1890 "hlslang/MachineIndependent/hlslang.y"
                         {
        (yyval.interm.typeList) = (yyvsp[0].interm.typeList);
    }
#line 4760 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 203: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 1893 "hlslang/MachineIndependent/hlslang.y"
                                                 {
        (yyval.interm.typeList) = (yyvsp[-1].interm.typeList);
        for (unsigned int i = 0; i < (yyvsp[0].interm.typeList)->size(); ++i) {
            for (unsigned int j = 0; j < (yyval.interm.typeList)->size(); ++j) {
                if ((*(yyval.interm.typeList))[j].type->getFieldName() == (*(yyvsp[0].interm.typeList))[i].type->getFieldName()) {
                    parseContext.error((*(yyvsp[0].interm.typeList))[i].line, "duplicate field name in structure:", "struct", (*(yyvsp[0].interm.typeList))[i].type->getFieldName().c_str());
                    parseContext.recover();
                }
            }
            (yyval.interm.typeList)->push_back((*(yyvsp[0].interm.typeList))[i]);
        }
    }
#line 4777 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 204: /* struct_declaration: type_specifier struct_declarator_list SEMICOLON  */
#line 1908 "hlslang/MachineIndependent/hlslang.y"
                                                      {
        (yyval.interm.typeList) = (yyvsp[-1].interm.typeList);

        if (parseContext.voidErrorCheck((yyvsp[-2].interm.type).line, (*(yyvsp[-1].interm.typeList))[0].type->getFieldName(), (yyvsp[-2].interm.type))) {
            parseContext.recover();
        }
        for (unsigned int i = 0; i < (yyval.interm.typeList)->size(); ++i) {
            //
            // Careful not to replace already know aspects of type, like array-ness
            //
            TType* type = (*(yyval.interm.typeList))[i].type;
            type->setBasicType((yyvsp[-2].interm.type).type);
            type->setPrecision((yyvsp[-2].interm.type).precision);
            type->setColsCount((yyvsp[-2].interm.type).matcols);
            type->setRowsCount((yyvsp[-2].interm.type).matrows);
            type->setMatrix((yyvsp[-2].interm.type).matrix);
            
            // don't allow arrays of arrays
            if (type->isArray()) {
                if (parseContext.arrayTypeErrorCheck((yyvsp[-2].interm.type).line, (yyvsp[-2].interm.type)))
                    parseContext.recover();
            }
            if ((yyvsp[-2].interm.type).array)
                type->setArraySize((yyvsp[-2].interm.type).arraySize);
            if ((yyvsp[-2].interm.type).userDef) {
                type->setStruct((yyvsp[-2].interm.type).userDef->getStruct());
                type->setTypeName((yyvsp[-2].interm.type).userDef->getTypeName());
            }
        }
    }
#line 4812 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 205: /* struct_declarator_list: struct_declarator  */
#line 1941 "hlslang/MachineIndependent/hlslang.y"
                        {
        (yyval.interm.typeList) = NewPoolTTypeList();
        (yyval.interm.typeList)->push_back((yyvsp[0].interm.typeLine));
    }
#line 4821 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 206: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 1945 "hlslang/MachineIndependent/hlslang.y"
                                                     {
        (yyval.interm.typeList)->push_back((yyvsp[0].interm.typeLine));
    }
#line 4829 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 207: /* struct_declarator: IDENTIFIER  */
#line 1951 "hlslang/MachineIndependent/hlslang.y"
                 {
        (yyval.interm.typeLine).type = new TType(EbtVoid, EbpUndefined);
        (yyval.interm.typeLine).line = (yyvsp[0].lex).line;
        (yyval.interm.typeLine).type->setFieldName(*(yyvsp[0].lex).string);
    }
#line 4839 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 208: /* struct_declarator: IDENTIFIER COLON IDENTIFIER  */
#line 1956 "hlslang/MachineIndependent/hlslang.y"
                                  {
        (yyval.interm.typeLine).type = new TType(EbtVoid, EbpUndefined);
        (yyval.interm.typeLine).line = (yyvsp[-2].lex).line;
        (yyval.interm.typeLine).type->setFieldName(*(yyvsp[-2].lex).string);
        (yyval.interm.typeLine).type->setSemantic(*(yyvsp[0].lex).string);
    }
#line 4850 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 209: /* struct_declarator: IDENTIFIER LEFT_BRACKET const_expression RIGHT_BRACKET  */
#line 1962 "hlslang/MachineIndependent/hlslang.y"
                                                             {
        (yyval.interm.typeLine).type = new TType(EbtVoid, EbpUndefined);
        (yyval.interm.typeLine).line = (yyvsp[-3].lex).line;
        (yyval.interm.typeLine).type->setFieldName(*(yyvsp[-3].lex).string);

        int size;
        if (parseContext.arraySizeErrorCheck((yyvsp[-2].lex).line, (yyvsp[-1].interm.intermTypedNode), size))
            parseContext.recover();
        (yyval.interm.typeLine).type->setArraySize(size);
    }
#line 4865 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 210: /* struct_declarator: IDENTIFIER LEFT_BRACKET const_expression RIGHT_BRACKET COLON IDENTIFIER  */
#line 1972 "hlslang/MachineIndependent/hlslang.y"
                                                                              {
        (yyval.interm.typeLine).type = new TType(EbtVoid, EbpUndefined);
        (yyval.interm.typeLine).line = (yyvsp[-5].lex).line;
        (yyval.interm.typeLine).type->setFieldName(*(yyvsp[-5].lex).string);

        int size;
        if (parseContext.arraySizeErrorCheck((yyvsp[-4].lex).line, (yyvsp[-3].interm.intermTypedNode), size))
            parseContext.recover();
        (yyval.interm.typeLine).type->setArraySize(size);
        (yyval.interm.typeLine).type->setSemantic(*(yyvsp[0].lex).string);
    }
#line 4881 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 211: /* initializer: assign_expression  */
#line 1988 "hlslang/MachineIndependent/hlslang.y"
                        { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 4887 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 212: /* initializer: initialization_list  */
#line 1989 "hlslang/MachineIndependent/hlslang.y"
                          { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 4893 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 213: /* initializer: sampler_initializer  */
#line 1990 "hlslang/MachineIndependent/hlslang.y"
                          { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 4899 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 214: /* declaration_statement: declaration  */
#line 1994 "hlslang/MachineIndependent/hlslang.y"
                  { (yyval.interm.intermNode) = (yyvsp[0].interm.intermDeclaration); }
#line 4905 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 215: /* statement: compound_statement  */
#line 1998 "hlslang/MachineIndependent/hlslang.y"
                          { (yyval.interm.intermNode) = (yyvsp[0].interm.intermAggregate); }
#line 4911 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 216: /* statement: simple_statement  */
#line 1999 "hlslang/MachineIndependent/hlslang.y"
                          { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 4917 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 217: /* simple_statement: declaration_statement  */
#line 2005 "hlslang/MachineIndependent/hlslang.y"
                            { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 4923 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 218: /* simple_statement: expression_statement  */
#line 2006 "hlslang/MachineIndependent/hlslang.y"
                            { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 4929 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 219: /* simple_statement: selection_statement  */
#line 2007 "hlslang/MachineIndependent/hlslang.y"
                            { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 4935 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 220: /* simple_statement: iteration_statement  */
#line 2008 "hlslang/MachineIndependent/hlslang.y"
                            { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 4941 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 221: /* simple_statement: jump_statement  */
#line 2009 "hlslang/MachineIndependent/hlslang.y"
                            { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 4947 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 222: /* compound_statement: LEFT_BRACE RIGHT_BRACE  */
#line 2013 "hlslang/MachineIndependent/hlslang.y"
                             { (yyval.interm.intermAggregate) = 0; }
#line 4953 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 223: /* $@1: %empty  */
#line 2014 "hlslang/MachineIndependent/hlslang.y"
                 { parseContext.symbolTable.push(); }
#line 4959 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 224: /* $@2: %empty  */
#line 2014 "hlslang/MachineIndependent/hlslang.y"
                                                                     { parseContext.symbolTable.pop(); }
#line 4965 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 225: /* compound_statement: LEFT_BRACE $@1 statement_list $@2 RIGHT_BRACE  */
#line 2014 "hlslang/MachineIndependent/hlslang.y"
                                                                                                                     {
        if ((yyvsp[-2].interm.intermAggregate) != 0)
            (yyvsp[-2].interm.intermAggregate)->setOperator(EOpSequence);
        (yyval.interm.intermAggregate) = (yyvsp[-2].interm.intermAggregate);
    }
#line 4975 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 226: /* statement_no_new_scope: compound_statement_no_new_scope  */
#line 2022 "hlslang/MachineIndependent/hlslang.y"
                                      { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 4981 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 227: /* statement_no_new_scope: simple_statement  */
#line 2023 "hlslang/MachineIndependent/hlslang.y"
                                      { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 4987 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 228: /* compound_statement_no_new_scope: LEFT_BRACE RIGHT_BRACE  */
#line 2028 "hlslang/MachineIndependent/hlslang.y"
                             {
        (yyval.interm.intermNode) = 0;
    }
#line 4995 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 229: /* compound_statement_no_new_scope: LEFT_BRACE statement_list RIGHT_BRACE  */
#line 2031 "hlslang/MachineIndependent/hlslang.y"
                                            {
        if ((yyvsp[-1].interm.intermAggregate))
            (yyvsp[-1].interm.intermAggregate)->setOperator(EOpSequence);
        (yyval.interm.intermNode) = (yyvsp[-1].interm.intermAggregate);
    }
#line 5005 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 230: /* statement_list: statement  */
#line 2039 "hlslang/MachineIndependent/hlslang.y"
                {
        (yyval.interm.intermAggregate) = ir_make_aggregate((yyvsp[0].interm.intermNode), gNullSourceLoc); 
    }
#line 5013 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 231: /* statement_list: statement_list statement  */
#line 2042 "hlslang/MachineIndependent/hlslang.y"
                               { 
        (yyval.interm.intermAggregate) = ir_grow_aggregate((yyvsp[-1].interm.intermAggregate), (yyvsp[0].interm.intermNode), gNullSourceLoc);
    }
#line 5021 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 232: /* expression_statement: SEMICOLON  */
#line 2048 "hlslang/MachineIndependent/hlslang.y"
                 { (yyval.interm.intermNode) = 0; }
#line 5027 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 233: /* expression_statement: expression SEMICOLON  */
#line 2049 "hlslang/MachineIndependent/hlslang.y"
                            { (yyval.interm.intermNode) = static_cast<TIntermNode*>((yyvsp[-1].interm.intermTypedNode)); }
#line 5033 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 234: /* selection_statement: IF LEFT_PAREN expression RIGHT_PAREN selection_rest_statement  */
#line 2053 "hlslang/MachineIndependent/hlslang.y"
                                                                    {
        if (parseContext.boolErrorCheck((yyvsp[-4].lex).line, (yyvsp[-2].interm.intermTypedNode)))
            parseContext.recover();
        (yyval.interm.intermNode) = ir_add_selection((yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.nodePair), (yyvsp[-4].lex).line, parseContext.infoSink);
    }
#line 5043 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 235: /* selection_rest_statement: statement ELSE statement  */
#line 2061 "hlslang/MachineIndependent/hlslang.y"
                               {
        (yyval.interm.nodePair).node1 = (yyvsp[-2].interm.intermNode);
        (yyval.interm.nodePair).node2 = (yyvsp[0].interm.intermNode);
    }
#line 5052 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 236: /* selection_rest_statement: statement  */
#line 2065 "hlslang/MachineIndependent/hlslang.y"
                {
        (yyval.interm.nodePair).node1 = (yyvsp[0].interm.intermNode);
        (yyval.interm.nodePair).node2 = 0;
    }
#line 5061 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 237: /* condition: expression  */
#line 2075 "hlslang/MachineIndependent/hlslang.y"
                 {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
        if (parseContext.boolErrorCheck((yyvsp[0].interm.intermTypedNode)->getLine(), (yyvsp[0].interm.intermTypedNode)))
            parseContext.recover();
    }
#line 5071 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 238: /* condition: fully_specified_type IDENTIFIER EQUAL initializer  */
#line 2080 "hlslang/MachineIndependent/hlslang.y"
                                                        {
        TIntermSymbol* symbol;
        if (parseContext.structQualifierErrorCheck((yyvsp[-2].lex).line, (yyvsp[-3].interm.type)))
            parseContext.recover();
        if (parseContext.boolErrorCheck((yyvsp[-2].lex).line, (yyvsp[-3].interm.type)))
            parseContext.recover();

        if (!parseContext.executeInitializer((yyvsp[-2].lex).line, *(yyvsp[-2].lex).string, (yyvsp[-3].interm.type), (yyvsp[0].interm.intermTypedNode), symbol)) {
			(yyval.interm.intermTypedNode) = ir_add_declaration(symbol, (yyvsp[0].interm.intermTypedNode), (yyvsp[-2].lex).line, parseContext);
        } else {
            parseContext.recover();
            (yyval.interm.intermTypedNode) = 0;
        }
    }
#line 5090 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 239: /* $@3: %empty  */
#line 2097 "hlslang/MachineIndependent/hlslang.y"
                       { parseContext.symbolTable.push(); ++parseContext.loopNestingLevel; }
#line 5096 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 240: /* iteration_statement: WHILE LEFT_PAREN $@3 condition RIGHT_PAREN statement_no_new_scope  */
#line 2097 "hlslang/MachineIndependent/hlslang.y"
                                                                                                                                          {
        parseContext.symbolTable.pop();
        (yyval.interm.intermNode) = ir_add_loop(ELoopWhile, (yyvsp[-2].interm.intermTypedNode), 0, (yyvsp[0].interm.intermNode), (yyvsp[-5].lex).line);
        --parseContext.loopNestingLevel;
    }
#line 5106 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 241: /* $@4: %empty  */
#line 2102 "hlslang/MachineIndependent/hlslang.y"
         { ++parseContext.loopNestingLevel; }
#line 5112 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 242: /* iteration_statement: DO $@4 statement WHILE LEFT_PAREN expression RIGHT_PAREN SEMICOLON  */
#line 2102 "hlslang/MachineIndependent/hlslang.y"
                                                                                                          {
        if (parseContext.boolErrorCheck((yyvsp[0].lex).line, (yyvsp[-2].interm.intermTypedNode)))
            parseContext.recover();
                    
        (yyval.interm.intermNode) = ir_add_loop(ELoopDoWhile, (yyvsp[-2].interm.intermTypedNode), 0, (yyvsp[-5].interm.intermNode), (yyvsp[-4].lex).line);
        --parseContext.loopNestingLevel;
    }
#line 5124 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 243: /* $@5: %empty  */
#line 2109 "hlslang/MachineIndependent/hlslang.y"
                     { parseContext.symbolTable.push(); ++parseContext.loopNestingLevel; }
#line 5130 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 244: /* iteration_statement: FOR LEFT_PAREN $@5 for_init_statement for_rest_statement RIGHT_PAREN statement_no_new_scope  */
#line 2109 "hlslang/MachineIndependent/hlslang.y"
                                                                                                                                                                    {
        parseContext.symbolTable.pop();
        (yyval.interm.intermNode) = ir_make_aggregate((yyvsp[-3].interm.intermNode), (yyvsp[-5].lex).line);
        (yyval.interm.intermNode) = ir_grow_aggregate(
                (yyval.interm.intermNode),
                ir_add_loop(ELoopFor, reinterpret_cast<TIntermTyped*>((yyvsp[-2].interm.nodePair).node1), reinterpret_cast<TIntermTyped*>((yyvsp[-2].interm.nodePair).node2), (yyvsp[0].interm.intermNode), (yyvsp[-6].lex).line),
                (yyvsp[-6].lex).line);
        (yyval.interm.intermNode)->getAsAggregate()->setOperator(EOpSequence);
        --parseContext.loopNestingLevel;
    }
#line 5145 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 245: /* for_init_statement: expression_statement  */
#line 2122 "hlslang/MachineIndependent/hlslang.y"
                           {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 5153 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 246: /* for_init_statement: declaration_statement  */
#line 2125 "hlslang/MachineIndependent/hlslang.y"
                            {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 5161 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 247: /* conditionopt: condition  */
#line 2131 "hlslang/MachineIndependent/hlslang.y"
                {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 5169 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 248: /* conditionopt: %empty  */
#line 2134 "hlslang/MachineIndependent/hlslang.y"
                        {
        (yyval.interm.intermTypedNode) = 0;
    }
#line 5177 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 249: /* for_rest_statement: conditionopt SEMICOLON  */
#line 2140 "hlslang/MachineIndependent/hlslang.y"
                             {
        (yyval.interm.nodePair).node1 = (yyvsp[-1].interm.intermTypedNode);
        (yyval.interm.nodePair).node2 = 0;
    }
#line 5186 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 250: /* for_rest_statement: conditionopt SEMICOLON expression  */
#line 2144 "hlslang/MachineIndependent/hlslang.y"
                                         {
        (yyval.interm.nodePair).node1 = (yyvsp[-2].interm.intermTypedNode);
        (yyval.interm.nodePair).node2 = (yyvsp[0].interm.intermTypedNode);
    }
#line 5195 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 251: /* jump_statement: CONTINUE SEMICOLON  */
#line 2151 "hlslang/MachineIndependent/hlslang.y"
                         {
        if (parseContext.loopNestingLevel <= 0) {
            parseContext.error((yyvsp[-1].lex).line, "continue statement only allowed in loops", "", "");
            parseContext.recover();
        }        
        (yyval.interm.intermNode) = ir_add_branch(EOpContinue, (yyvsp[-1].lex).line);
    }
#line 5207 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 252: /* jump_statement: BREAK SEMICOLON  */
#line 2158 "hlslang/MachineIndependent/hlslang.y"
                      {
        if (parseContext.loopNestingLevel <= 0) {
            parseContext.error((yyvsp[-1].lex).line, "break statement only allowed in loops", "", "");
            parseContext.recover();
        }        
        (yyval.interm.intermNode) = ir_add_branch(EOpBreak, (yyvsp[-1].lex).line);
    }
#line 5219 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 253: /* jump_statement: RETURN SEMICOLON  */
#line 2165 "hlslang/MachineIndependent/hlslang.y"
                       {
        (yyval.interm.intermNode) = ir_add_branch(EOpReturn, (yyvsp[-1].lex).line);
        if (parseContext.currentFunctionType->getBasicType() != EbtVoid) {
            parseContext.error((yyvsp[-1].lex).line, "non-void function must return a value", "return", "");
            parseContext.recover();
        }
    }
#line 5231 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 254: /* jump_statement: RETURN expression SEMICOLON  */
#line 2172 "hlslang/MachineIndependent/hlslang.y"
                                  {
        TIntermTyped *temp = (yyvsp[-1].interm.intermTypedNode);
        if (parseContext.currentFunctionType->getBasicType() == EbtVoid) {
            parseContext.error((yyvsp[-2].lex).line, "void function cannot return a value", "return", "");
            parseContext.recover();
        } else if (*(parseContext.currentFunctionType) != (yyvsp[-1].interm.intermTypedNode)->getType()) {
            TOperator op = parseContext.getConstructorOp(*(parseContext.currentFunctionType));
            if (op != EOpNull)
                temp = parseContext.constructBuiltIn((parseContext.currentFunctionType), op, (yyvsp[-1].interm.intermTypedNode), (yyvsp[-2].lex).line, false);
            else
                temp = 0;
            if (temp == 0) {
                parseContext.error((yyvsp[-2].lex).line, "function return is not matching type:", "return", "");
                parseContext.recover();
                temp = (yyvsp[-1].interm.intermTypedNode);
            }
        }
        (yyval.interm.intermNode) = ir_add_branch(EOpReturn, temp, (yyvsp[-2].lex).line);
        parseContext.functionReturnsValue = true;
    }
#line 5256 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 255: /* jump_statement: DISCARD SEMICOLON  */
#line 2192 "hlslang/MachineIndependent/hlslang.y"
                        {
		// Jim: using discard when compiling vertex shaders should not be considered a syntactic error, instead,
		// we should issue a semantic error only if the code path is actually executed. (Not yet implemented)
        //FRAG_ONLY("discard", $1.line);
        (yyval.interm.intermNode) = ir_add_branch(EOpKill, (yyvsp[-1].lex).line);
    }
#line 5267 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 256: /* translation_unit: external_declaration  */
#line 2203 "hlslang/MachineIndependent/hlslang.y"
                           {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
        parseContext.treeRoot = (yyval.interm.intermNode);
    }
#line 5276 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 257: /* translation_unit: translation_unit external_declaration  */
#line 2207 "hlslang/MachineIndependent/hlslang.y"
                                            {
        (yyval.interm.intermNode) = ir_grow_aggregate((yyvsp[-1].interm.intermNode), (yyvsp[0].interm.intermNode), gNullSourceLoc);
        parseContext.treeRoot = (yyval.interm.intermNode);
    }
#line 5285 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 258: /* external_declaration: function_definition  */
#line 2214 "hlslang/MachineIndependent/hlslang.y"
                          {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 5293 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 259: /* external_declaration: declaration  */
#line 2217 "hlslang/MachineIndependent/hlslang.y"
                  {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermDeclaration);
    }
#line 5301 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 260: /* external_declaration: SEMICOLON  */
#line 2220 "hlslang/MachineIndependent/hlslang.y"
                { (yyval.interm.intermNode) = 0; }
#line 5307 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 261: /* $@6: %empty  */
#line 2224 "hlslang/MachineIndependent/hlslang.y"
                         {
        TFunction& function = *((yyvsp[0].interm).function);
        TFunction* prevDec = static_cast<TFunction*>(parseContext.symbolTable.find(function.getMangledName()));
        //
        // Note:  'prevDec' could be 'function' if this is the first time we've seen function
        // as it would have just been put in the symbol table.  Otherwise, we're looking up
        // an earlier occurance.
        //
        if (prevDec->isDefined()) {
            //
            // Then this function already has a body.
            //
            parseContext.error((yyvsp[0].interm).line, "function already has a body", function.getName().c_str(), "");
            parseContext.recover();
        }
        prevDec->setDefined();

        //
        // New symbol table scope for body of function plus its arguments
        //
        parseContext.symbolTable.push();

        //
        // Remember the return type for later checking for RETURN statements.
        //
        parseContext.currentFunctionType = &(prevDec->getReturnType());
        parseContext.functionReturnsValue = false;

        //
        // Insert parameters into the symbol table.
        // If the parameter has no name, it's not an error, just don't insert it
        // (could be used for unused args).
        //
        // Also, accumulate the list of parameters into the HIL, so lower level code
        // knows where to find parameters.
        //
        TIntermAggregate* paramNodes = new TIntermAggregate;
        for (int i = 0; i < function.getParamCount(); i++) {
            TParameter& param = function[i];
            if (param.name != 0) {
                TVariable *variable = new TVariable(param.name, param.info, *param.type);
                //
                // Insert the parameters with name in the symbol table.
                //
                if (! parseContext.symbolTable.insert(*variable)) {
                    parseContext.error((yyvsp[0].interm).line, "redefinition", variable->getName().c_str(), "");
                    parseContext.recover();
                    delete variable;
                }
                //
                // Transfer ownership of name pointer to symbol table.
                //
                param.name = 0;

                //
                // Add the parameter to the HIL
                //                
                paramNodes = ir_grow_aggregate(
                                               paramNodes, 
                                               ir_add_symbol(variable, (yyvsp[0].interm).line),
                                               (yyvsp[0].interm).line);
            } else {
                paramNodes = ir_grow_aggregate(paramNodes, ir_add_symbol_internal(0, "", param.info, *param.type, (yyvsp[0].interm).line), (yyvsp[0].interm).line);
            }
        }
        ir_set_aggregate_op(paramNodes, EOpParameters, (yyvsp[0].interm).line);
        (yyvsp[0].interm).intermAggregate = paramNodes;
        parseContext.loopNestingLevel = 0;
    }
#line 5381 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 262: /* function_definition: function_prototype $@6 compound_statement_no_new_scope  */
#line 2293 "hlslang/MachineIndependent/hlslang.y"
                                    {
        //?? Check that all paths return a value if return type != void ?
        //   May be best done as post process phase on intermediate code
        if (parseContext.currentFunctionType->getBasicType() != EbtVoid && ! parseContext.functionReturnsValue) {
            parseContext.error((yyvsp[-2].interm).line, "function does not return a value:", "", (yyvsp[-2].interm).function->getName().c_str());
            parseContext.recover();
        }
        parseContext.symbolTable.pop();
        (yyval.interm.intermNode) = ir_grow_aggregate((yyvsp[-2].interm).intermAggregate, (yyvsp[0].interm.intermNode), gNullSourceLoc);
        ir_set_aggregate_op((yyval.interm.intermNode), EOpFunction, (yyvsp[-2].interm).line);
        (yyval.interm.intermNode)->getAsAggregate()->setName((yyvsp[-2].interm).function->getMangledName().c_str());
        (yyval.interm.intermNode)->getAsAggregate()->setPlainName((yyvsp[-2].interm).function->getName().c_str());
        (yyval.interm.intermNode)->getAsAggregate()->setType((yyvsp[-2].interm).function->getReturnType());
        
	if ( (yyvsp[-2].interm).function->getInfo())
	    (yyval.interm.intermNode)->getAsAggregate()->setSemantic((yyvsp[-2].interm).function->getInfo()->getSemantic());
    }
#line 5403 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 263: /* initialization_list: LEFT_BRACE initializer_list RIGHT_BRACE  */
#line 2313 "hlslang/MachineIndependent/hlslang.y"
                                              {
		(yyval.interm.intermTypedNode) = (yyvsp[-1].interm.intermAggregate);
    }
#line 5411 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 264: /* initialization_list: LEFT_BRACE initializer_list COMMA RIGHT_BRACE  */
#line 2316 "hlslang/MachineIndependent/hlslang.y"
                                                    {
		(yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermAggregate);
    }
#line 5419 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 265: /* initializer_list: assign_expression  */
#line 2323 "hlslang/MachineIndependent/hlslang.y"
                        {
        //create a new aggNode
       (yyval.interm.intermAggregate) = ir_make_aggregate( (yyvsp[0].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode)->getLine());       
    }
#line 5428 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 266: /* initializer_list: initialization_list  */
#line 2327 "hlslang/MachineIndependent/hlslang.y"
                          {
       //take the inherited aggNode and return it
       (yyval.interm.intermAggregate) = (yyvsp[0].interm.intermTypedNode)->getAsAggregate();
    }
#line 5437 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 267: /* initializer_list: initializer_list COMMA assign_expression  */
#line 2331 "hlslang/MachineIndependent/hlslang.y"
                                               {
        // append to the aggNode
       (yyval.interm.intermAggregate) = ir_grow_aggregate( (yyvsp[-2].interm.intermAggregate), (yyvsp[0].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode)->getLine());       
    }
#line 5446 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 268: /* initializer_list: initializer_list COMMA initialization_list  */
#line 2335 "hlslang/MachineIndependent/hlslang.y"
                                                 {
       // append all children or $3 to $1
       (yyval.interm.intermAggregate) = parseContext.mergeAggregates( (yyvsp[-2].interm.intermAggregate), (yyvsp[0].interm.intermTypedNode)->getAsAggregate());
    }
#line 5455 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 269: /* annotation: LEFT_ANGLE RIGHT_ANGLE  */
#line 2342 "hlslang/MachineIndependent/hlslang.y"
                             {
        //empty annotation
      (yyval.interm.ann) = 0;
    }
#line 5464 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 270: /* annotation: LEFT_ANGLE annotation_list RIGHT_ANGLE  */
#line 2346 "hlslang/MachineIndependent/hlslang.y"
                                             {
      (yyval.interm.ann) = (yyvsp[-1].interm.ann);
    }
#line 5472 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 271: /* annotation_list: annotation_item  */
#line 2352 "hlslang/MachineIndependent/hlslang.y"
                      {
        (yyval.interm.ann) = new TAnnotation;
		(yyval.interm.ann)->addKey( *(yyvsp[0].lex).string);
    }
#line 5481 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 272: /* annotation_list: annotation_list annotation_item  */
#line 2356 "hlslang/MachineIndependent/hlslang.y"
                                      {
        (yyvsp[-1].interm.ann)->addKey( *(yyvsp[0].lex).string);
		(yyval.interm.ann) = (yyvsp[-1].interm.ann);
    }
#line 5490 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 273: /* annotation_item: ann_type IDENTIFIER EQUAL ann_literal SEMICOLON  */
#line 2363 "hlslang/MachineIndependent/hlslang.y"
                                                      {
        (yyval.lex).string = (yyvsp[-3].lex).string;
    }
#line 5498 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 274: /* ann_type: FLOAT_TYPE  */
#line 2369 "hlslang/MachineIndependent/hlslang.y"
                 {}
#line 5504 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 275: /* ann_type: HALF_TYPE  */
#line 2370 "hlslang/MachineIndependent/hlslang.y"
                {}
#line 5510 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 276: /* ann_type: FIXED_TYPE  */
#line 2371 "hlslang/MachineIndependent/hlslang.y"
                 {}
#line 5516 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 277: /* ann_type: INT_TYPE  */
#line 2372 "hlslang/MachineIndependent/hlslang.y"
               {}
#line 5522 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 278: /* ann_type: BOOL_TYPE  */
#line 2373 "hlslang/MachineIndependent/hlslang.y"
                {}
#line 5528 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 279: /* ann_type: STRING_TYPE  */
#line 2374 "hlslang/MachineIndependent/hlslang.y"
                  {}
#line 5534 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 280: /* ann_type: BVEC2  */
#line 2375 "hlslang/MachineIndependent/hlslang.y"
            {}
#line 5540 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 281: /* ann_type: BVEC3  */
#line 2376 "hlslang/MachineIndependent/hlslang.y"
            {}
#line 5546 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 282: /* ann_type: BVEC4  */
#line 2377 "hlslang/MachineIndependent/hlslang.y"
            {}
#line 5552 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 283: /* ann_type: IVEC2  */
#line 2378 "hlslang/MachineIndependent/hlslang.y"
            {}
#line 5558 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 284: /* ann_type: IVEC3  */
#line 2379 "hlslang/MachineIndependent/hlslang.y"
            {}
#line 5564 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 285: /* ann_type: IVEC4  */
#line 2380 "hlslang/MachineIndependent/hlslang.y"
            {}
#line 5570 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 286: /* ann_type: VEC2  */
#line 2381 "hlslang/MachineIndependent/hlslang.y"
           {}
#line 5576 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 287: /* ann_type: VEC3  */
#line 2382 "hlslang/MachineIndependent/hlslang.y"
           {}
#line 5582 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 288: /* ann_type: VEC4  */
#line 2383 "hlslang/MachineIndependent/hlslang.y"
           {}
#line 5588 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 289: /* ann_type: HVEC2  */
#line 2384 "hlslang/MachineIndependent/hlslang.y"
            {}
#line 5594 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 290: /* ann_type: HVEC3  */
#line 2385 "hlslang/MachineIndependent/hlslang.y"
            {}
#line 5600 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 291: /* ann_type: HVEC4  */
#line 2386 "hlslang/MachineIndependent/hlslang.y"
            {}
#line 5606 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 292: /* ann_type: FVEC2  */
#line 2387 "hlslang/MachineIndependent/hlslang.y"
            {}
#line 5612 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 293: /* ann_type: FVEC3  */
#line 2388 "hlslang/MachineIndependent/hlslang.y"
            {}
#line 5618 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 294: /* ann_type: FVEC4  */
#line 2389 "hlslang/MachineIndependent/hlslang.y"
            {}
#line 5624 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 295: /* ann_literal: ann_numerical_constant  */
#line 2393 "hlslang/MachineIndependent/hlslang.y"
                                 {}
#line 5630 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 296: /* ann_literal: STRINGCONSTANT  */
#line 2394 "hlslang/MachineIndependent/hlslang.y"
                         {}
#line 5636 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 297: /* ann_literal: ann_literal_constructor  */
#line 2395 "hlslang/MachineIndependent/hlslang.y"
                                  {}
#line 5642 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 298: /* ann_literal: ann_literal_init_list  */
#line 2396 "hlslang/MachineIndependent/hlslang.y"
                                {}
#line 5648 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 299: /* ann_numerical_constant: INTCONSTANT  */
#line 2400 "hlslang/MachineIndependent/hlslang.y"
                      {
		(yyval.lex).f = (float)(yyvsp[0].lex).i;
	}
#line 5656 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 300: /* ann_numerical_constant: BOOLCONSTANT  */
#line 2403 "hlslang/MachineIndependent/hlslang.y"
                       {
		(yyval.lex).f = ((yyvsp[0].lex).b) ? 1.0f : 0.0f;
	}
#line 5664 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 301: /* ann_numerical_constant: FLOATCONSTANT  */
#line 2406 "hlslang/MachineIndependent/hlslang.y"
                        {
		(yyval.lex).f = (yyvsp[0].lex).f;
	}
#line 5672 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 302: /* ann_literal_constructor: ann_type LEFT_PAREN ann_value_list RIGHT_PAREN  */
#line 2412 "hlslang/MachineIndependent/hlslang.y"
                                                         {}
#line 5678 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 303: /* ann_value_list: ann_numerical_constant  */
#line 2416 "hlslang/MachineIndependent/hlslang.y"
                                 {}
#line 5684 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 304: /* ann_value_list: ann_value_list COMMA ann_numerical_constant  */
#line 2417 "hlslang/MachineIndependent/hlslang.y"
                                                      {}
#line 5690 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 305: /* ann_literal_init_list: LEFT_BRACE ann_value_list RIGHT_BRACE  */
#line 2421 "hlslang/MachineIndependent/hlslang.y"
                                                {}
#line 5696 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 306: /* register_specifier: COLON REGISTER LEFT_PAREN IDENTIFIER RIGHT_PAREN  */
#line 2425 "hlslang/MachineIndependent/hlslang.y"
                                                       {
        (yyval.lex) = (yyvsp[-1].lex);
    }
#line 5704 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 307: /* semantic: COLON IDENTIFIER  */
#line 2431 "hlslang/MachineIndependent/hlslang.y"
                           { (yyval.lex).string = (yyvsp[0].lex).string;}
#line 5710 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 308: /* type_info: %empty  */
#line 2435 "hlslang/MachineIndependent/hlslang.y"
          { (yyval.interm.typeInfo) = 0;}
#line 5716 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 309: /* type_info: semantic  */
#line 2436 "hlslang/MachineIndependent/hlslang.y"
                   { (yyval.interm.typeInfo) = new TTypeInfo( *(yyvsp[0].lex).string, 0); }
#line 5722 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 310: /* type_info: register_specifier  */
#line 2437 "hlslang/MachineIndependent/hlslang.y"
                             { (yyval.interm.typeInfo) = new TTypeInfo( "", *(yyvsp[0].lex).string, 0); }
#line 5728 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 311: /* type_info: annotation  */
#line 2438 "hlslang/MachineIndependent/hlslang.y"
                     { (yyval.interm.typeInfo) = new TTypeInfo( "", (yyvsp[0].interm.ann)); }
#line 5734 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 312: /* type_info: semantic annotation  */
#line 2439 "hlslang/MachineIndependent/hlslang.y"
                              { (yyval.interm.typeInfo) = new TTypeInfo( *(yyvsp[-1].lex).string, (yyvsp[0].interm.ann)); }
#line 5740 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 313: /* type_info: semantic register_specifier  */
#line 2440 "hlslang/MachineIndependent/hlslang.y"
                                      { (yyval.interm.typeInfo) = new TTypeInfo( *(yyvsp[-1].lex).string, *(yyvsp[0].lex).string, 0); }
#line 5746 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 314: /* type_info: register_specifier annotation  */
#line 2441 "hlslang/MachineIndependent/hlslang.y"
                                        { (yyval.interm.typeInfo) = new TTypeInfo( "", *(yyvsp[-1].lex).string, (yyvsp[0].interm.ann)); }
#line 5752 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 315: /* type_info: semantic register_specifier annotation  */
#line 2442 "hlslang/MachineIndependent/hlslang.y"
                                                 { (yyval.interm.typeInfo) = new TTypeInfo( *(yyvsp[-2].lex).string, *(yyvsp[-1].lex).string, (yyvsp[0].interm.ann)); }
#line 5758 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 316: /* sampler_initializer: SAMPLERSTATE LEFT_BRACE sampler_init_list RIGHT_BRACE  */
#line 2446 "hlslang/MachineIndependent/hlslang.y"
                                                                {
		TIntermConstant* constant = ir_add_constant(TType(EbtFloat, EbpUndefined, EvqConst, 1), (yyvsp[-3].lex).line);
		constant->setValue(0.f);
		(yyval.interm.intermTypedNode) = constant;
	}
#line 5768 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 317: /* sampler_initializer: SAMPLERSTATE LEFT_BRACE RIGHT_BRACE  */
#line 2451 "hlslang/MachineIndependent/hlslang.y"
                                              {
	}
#line 5775 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 318: /* sampler_init_list: sampler_init_item  */
#line 2456 "hlslang/MachineIndependent/hlslang.y"
                            { }
#line 5781 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 319: /* sampler_init_list: sampler_init_list sampler_init_item  */
#line 2457 "hlslang/MachineIndependent/hlslang.y"
                                              { }
#line 5787 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 320: /* sampler_init_item: IDENTIFIER EQUAL IDENTIFIER SEMICOLON  */
#line 2461 "hlslang/MachineIndependent/hlslang.y"
                                                {}
#line 5793 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 321: /* sampler_init_item: IDENTIFIER EQUAL LEFT_ANGLE IDENTIFIER RIGHT_ANGLE SEMICOLON  */
#line 2462 "hlslang/MachineIndependent/hlslang.y"
                                                                       {}
#line 5799 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 322: /* sampler_init_item: IDENTIFIER EQUAL LEFT_PAREN IDENTIFIER RIGHT_PAREN SEMICOLON  */
#line 2463 "hlslang/MachineIndependent/hlslang.y"
                                                                       {}
#line 5805 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 323: /* sampler_init_item: TEXTURE EQUAL IDENTIFIER SEMICOLON  */
#line 2464 "hlslang/MachineIndependent/hlslang.y"
                                             {}
#line 5811 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 324: /* sampler_init_item: TEXTURE EQUAL LEFT_ANGLE IDENTIFIER RIGHT_ANGLE SEMICOLON  */
#line 2465 "hlslang/MachineIndependent/hlslang.y"
                                                                    {}
#line 5817 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;

  case 325: /* sampler_init_item: TEXTURE EQUAL LEFT_PAREN IDENTIFIER RIGHT_PAREN SEMICOLON  */
#line 2466 "hlslang/MachineIndependent/hlslang.y"
                                                                    {}
#line 5823 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"
    break;


#line 5827 "/home/stephan/Development/hlsl2glslfork/hlslang/MachineIndependent/hlslang_tab.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (parseContext, YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, parseContext);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, parseContext);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (parseContext, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, parseContext);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, parseContext);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 2469 "hlslang/MachineIndependent/hlslang.y"

