/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebInspectorRemoteChannel, WebInspectorServerWebViewConnectionController, NSNumber, NSString;

@interface WebInspectorServerWebViewConnection : NSObject {
	WebInspectorRemoteChannel *_channel;	// 4 = 0x4
	WebInspectorServerWebViewConnectionController *_controller;	// 8 = 0x8
	NSString *_connectionIdentifier;	// 12 = 0xc
	NSString *_destination;	// 16 = 0x10
	NSNumber *_identifier;	// 20 = 0x14
}
@property(readonly, retain) NSString *connectionIdentifier;	// G=0x316dbe4d; converted property
@property(readonly, retain) NSNumber *identifier;	// G=0x316dbe85; converted property
- (id)initWithController:(id)controller connectionIdentifier:(id)identifier destination:(id)destination identifier:(id)identifier4;	// 0x316dbcd5
- (void)clearChannel;	// 0x316dbebd
// converted property getter: - (id)connectionIdentifier;	// 0x316dbe4d
- (void)dealloc;	// 0x316dbdd5
// converted property getter: - (id)identifier;	// 0x316dbe85
- (void)receivedData:(id)data;	// 0x316dbfc5
- (void)receivedDidClose:(id)received;	// 0x316dc049
- (void)sendMessageToBackend:(id)backend;	// 0x316dbfa5
- (void)sendMessageToFrontend:(id)frontend;	// 0x316dbeed
- (BOOL)setupChannel;	// 0x316dbd79
@end

