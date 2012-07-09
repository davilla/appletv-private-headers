/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDelayedMediaContext.h"
#import <NSObject.h> // Unknown library

@class OCPPackage, NSURL;

@interface OCXDelayedMediaContext : NSObject <OCDDelayedMediaContext> {
	OCPPackage *mPackage;	// 4 = 0x4
	NSURL *mTargetLocation;	// 8 = 0x8
}
- (id)initWithTargetLocation:(id)targetLocation package:(id)package;	// 0x33a3fa35
- (void)dealloc;	// 0x33a51cfd
- (bool)loadDelayedNode:(id)node;	// 0x33bbd681
- (bool)saveDelayedMedia:(id)media toFile:(id)file;	// 0x33bbd685
@end
