/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class NSArray, AVCaptureInputInternal;

@interface AVCaptureInput : NSObject {
@private
	AVCaptureInputInternal *_inputInternal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *ports;	// G=0x3476a025; 
@property(retain) id session;	// G=0x34769fe1; S=0x34769ffd; converted property
- (id)init;	// 0x3476a08d
- (void)dealloc;	// 0x3476a045
- (void)didStartForSession:(id)session;	// 0x3476a01d
- (void)didStopForSession:(id)session error:(id)error;	// 0x3476a021
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x3476a17d
- (id)notReadyError;	// 0x3476a019
// declared property getter: - (id)ports;	// 0x3476a025
// converted property getter: - (id)session;	// 0x34769fe1
// converted property setter: - (void)setSession:(id)session;	// 0x34769ffd
@end

