/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class MPDocument, MEExporter;

@interface MEPlugin : NSObject {
	MEExporter *_delegate;	// 4 = 0x4
	MPDocument *_document;	// 8 = 0x8
}
@property(readonly, assign) MEExporter *delegate;	// G=0x31bf1b15; @synthesize=_delegate
- (id)initWithIdentifier:(id)identifier andDocument:(id)document andDelegate:(id)delegate;	// 0x31bf1a49
- (void)dealloc;	// 0x31bf1a9d
// declared property getter: - (id)delegate;	// 0x31bf1b15
@end

