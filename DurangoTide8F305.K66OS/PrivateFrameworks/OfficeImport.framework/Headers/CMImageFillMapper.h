/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMMapper.h"

@class OADFill, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface CMImageFillMapper : CMMapper {
@private
	OADFill *mFill;	// 8 = 0x8
	OADOrientedBounds *mBounds;	// 12 = 0xc
}
- (id)initWithOadFill:(id)oadFill bounds:(id)bounds parent:(id)parent;	// 0x34439181
- (id)blipAtIndex:(unsigned)index;	// 0x34439979
- (id)convertMetafileToPdf:(id)pdf state:(id)state;	// 0x3444eeb1
- (BOOL)isCropped;	// 0x344391cd
- (id)mainSubBlip;	// 0x34439871
- (void)mapAt:(id)at withState:(id)state;	// 0x3457ca11
- (id)mapImageFill:(id)fill withState:(id)state;	// 0x3443932d
- (void)mapImageFillAt:(id)at toStyle:(id)style withState:(id)state;	// 0x344ff315
- (void)mapNonImageFillAt:(id)at toStyle:(id)style withState:(id)state;	// 0x3444d58d
- (CGRect)uncroppedBox;	// 0x344acee5
@end

