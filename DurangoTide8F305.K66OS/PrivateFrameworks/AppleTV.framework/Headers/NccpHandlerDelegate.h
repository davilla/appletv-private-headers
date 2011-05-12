/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */



@protocol NccpHandlerDelegate
- (void)reportErrorMessage:(id)message;
- (void)reportInvalidCredentials;
- (void)reportNetworkingError;
- (void)reportUnrecoverableError;
- (void)reportUnsupportedSoftwareVersion:(id)version;
- (BOOL)startTransaction;
- (void)stopTransaction;
@end

