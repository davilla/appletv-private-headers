/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDParagraph;

__attribute__((visibility("hidden")))
@interface WDRun : NSObject {
@private
	WDParagraph *mParagraph;	// 4 = 0x4
}
- (id)init;	// 0x30e74749
- (id)initWithParagraph:(id)paragraph;	// 0x30d15c19
- (void)clearProperties;	// 0x30e74745
- (void)dealloc;	// 0x30c84cc1
- (BOOL)isEmpty;	// 0x30e74741
- (id)paragraph;	// 0x30c7f94d
- (int)runType;	// 0x30e7473d
@end

