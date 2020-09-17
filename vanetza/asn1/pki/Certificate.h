/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2"
 * 	found in "asn1/IEEE1609dot2.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_Certificate_H_
#define	_Certificate_H_


#include "asn_application.h"

/* Including external dependencies */
#include "CertificateBase.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Certificate */
typedef CertificateBase_t	 Certificate_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Certificate_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Certificate;
asn_struct_free_f Certificate_free;
asn_struct_print_f Certificate_print;
asn_constr_check_f Certificate_constraint;
ber_type_decoder_f Certificate_decode_ber;
der_type_encoder_f Certificate_encode_der;
xer_type_decoder_f Certificate_decode_xer;
xer_type_encoder_f Certificate_encode_xer;
oer_type_decoder_f Certificate_decode_oer;
oer_type_encoder_f Certificate_encode_oer;
per_type_decoder_f Certificate_decode_uper;
per_type_encoder_f Certificate_encode_uper;
per_type_decoder_f Certificate_decode_aper;
per_type_encoder_f Certificate_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Certificate_H_ */
#include "asn_internal.h"