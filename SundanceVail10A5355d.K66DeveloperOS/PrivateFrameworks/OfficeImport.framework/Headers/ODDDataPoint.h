/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODDPoint.h"

@class NSMutableArray;

@interface ODDDataPoint : ODDPoint {
	NSMutableArray *mPresentations;	// 20 = 0x14
}
- (void)addAssociatedPresentation:(id)presentation;	// 0x31ce3729
- (void)addPresentation:(id)presentation order:(unsigned long)order;	// 0x31ce345d
- (void)dealloc;	// 0x31ce9625
- (id)presentations;	// 0x31ce6ce1
@end
