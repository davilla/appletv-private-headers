/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface CPTextLineMaker : NSObject {
	NSMutableArray *textLines;	// 4 = 0x4
}
@property(readonly, retain) NSMutableArray *textLines;	// G=0x30bbc909; converted property
- (void)dealloc;	// 0x30bbca61
- (unsigned)makeTextLines:(id)lines;	// 0x30bbcb39
- (void)splitByGraphic:(id)graphic with:(CPPDFContext *)with;	// 0x30bbc919
// converted property getter: - (id)textLines;	// 0x30bbc909
- (void)zOrderSplitLines:(id)lines;	// 0x30bbc951
@end

