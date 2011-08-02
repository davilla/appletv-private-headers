/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library
#import "CPDisposable.h"

@class CPList;

@interface CPListItem : NSObject <CPDisposable> {
	CPList *list;	// 4 = 0x4
	int number;	// 8 = 0x8
	CFArrayRef paragraphs;	// 12 = 0xc
}
@property(retain, nonatomic) CPList *list;	// G=0x30bd3b65; S=0x30bd3d45; @synthesize
@property(assign, nonatomic) int number;	// G=0x30bd3b45; S=0x30bd3b55; @synthesize
- (id)init;	// 0x30bd3b75
- (void)addParagraph:(id)paragraph;	// 0x30bd3ca9
- (void)dealloc;	// 0x30bd3be9
- (void)dispose;	// 0x30bd3bc9
- (void)finalize;	// 0x30bd3c3d
// declared property getter: - (id)list;	// 0x30bd3b65
// declared property getter: - (int)number;	// 0x30bd3b45
- (id)paragraphAtIndex:(unsigned)index;	// 0x30bd3c91
- (unsigned)paragraphCount;	// 0x30bd3c79
// declared property setter: - (void)setList:(id)list;	// 0x30bd3d45
// declared property setter: - (void)setNumber:(int)number;	// 0x30bd3b55
@end

