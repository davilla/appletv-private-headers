/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRControl.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPreviewImageOverLay : BRControl {
@private
	NSString *_text1;	// 44 = 0x2c
	NSString *_text2;	// 48 = 0x30
	NSString *_text3;	// 52 = 0x34
}
@property(copy, nonatomic) NSString *text1;	// G=0x306eff05; S=0x306f06f9; @synthesize=_text1
@property(copy, nonatomic) NSString *text2;	// G=0x306efef5; S=0x306f0725; @synthesize=_text2
@property(copy, nonatomic) NSString *text3;	// G=0x306efee5; S=0x306f0751; @synthesize=_text3
- (id)init;	// 0x306eff81
- (void)dealloc;	// 0x306eff15
- (void)drawInContext:(CGContextRef)context;	// 0x306f08c9
// declared property setter: - (void)setText1:(id)a1;	// 0x306f06f9
// declared property setter: - (void)setText2:(id)a2;	// 0x306f0725
// declared property setter: - (void)setText3:(id)a3;	// 0x306f0751
// declared property getter: - (id)text1;	// 0x306eff05
// declared property getter: - (id)text2;	// 0x306efef5
// declared property getter: - (id)text3;	// 0x306efee5
@end

