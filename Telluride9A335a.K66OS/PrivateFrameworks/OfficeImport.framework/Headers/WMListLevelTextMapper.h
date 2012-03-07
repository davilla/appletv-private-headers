/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface WMListLevelTextMapper : NSObject {
@private
	NSMutableArray *m_tokens;	// 4 = 0x4
	int m_format;	// 8 = 0x8
	unsigned m_initNumber;	// 12 = 0xc
}
- (id)initWithText:(id)text;	// 0x35416709
- (id)initWithText:(id)text format:(int)format;	// 0x351c7801
- (id)initWithText:(id)text format:(int)format initNumber:(int)number;	// 0x351c7825
- (void)dealloc;	// 0x351c7e59
- (id)listLevelTextforOutline:(id)outline;	// 0x351c7b5d
- (id)token:(unsigned)token;	// 0x35416749
- (unsigned)tokenCount;	// 0x35416729
@end
