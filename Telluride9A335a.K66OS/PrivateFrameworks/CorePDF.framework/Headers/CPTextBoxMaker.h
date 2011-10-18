/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library

@class CPBody, CPZone;

@interface CPTextBoxMaker : NSObject {
	CPBody *bodyZone;	// 4 = 0x4
	CPZone *mainZone;	// 8 = 0x8
}
+ (void)boxLayoutsIn:(id)anIn;	// 0x31260049
+ (void)promoteLayoutsIn:(id)anIn;	// 0x3125ffed
- (void)boxLayout:(id)layout;	// 0x3125fe91
- (void)boxLayoutsIn:(id)anIn;	// 0x3125ff81
- (BOOL)layoutIsSliced:(id)sliced;	// 0x312600a5
- (void)makeBoxesWith:(id)with parent:(id)parent;	// 0x3125fad1
- (void)promoteLayoutsIn:(id)anIn;	// 0x3125fe25
- (void)promoteLayoutsInCertainRegions:(id)certainRegions;	// 0x3125fce9
- (void)rotate:(id)rotate;	// 0x3125fc8d
- (void)rotateTextBox:(id)box;	// 0x312601a1
@end

