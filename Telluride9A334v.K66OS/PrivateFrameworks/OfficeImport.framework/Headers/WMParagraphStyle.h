/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WMStyle.h"


__attribute__((visibility("hidden")))
@interface WMParagraphStyle : WMStyle {
@private
	BOOL mIsInTextFrame;	// 12 = 0xc
}
+ (BOOL)isShadingNull:(id)null;	// 0x35623c71
- (id)initWithWDParagraphProperties:(id)wdparagraphProperties isInTextFrame:(BOOL)textFrame;	// 0x357d1bbd
- (id)initWithWDStyle:(id)wdstyle isInTextFrame:(BOOL)textFrame;	// 0x355740bd
- (void)addListProperties:(id)properties;	// 0x355822bd
- (void)addParagraphProperties:(id)properties;	// 0x35574179
- (void)addParagraphStyleCharacterProperties:(id)properties;	// 0x35582ea5
- (void)mapBorders:(id)borders;	// 0x35574f21
@end

