// Objective-C API for talking to github.com/textileio/textile-go/mobile Go package.
//   gobind -lang=objc github.com/textileio/textile-go/mobile
//
// File is generated by gobind. Do not edit.

#ifndef __Mobile_H__
#define __Mobile_H__

@import Foundation;
#include "Universe.objc.h"

#include "Net.objc.h"

@class MobileMobile;
@class MobileWrapper;

/**
 * Mobile is the name of the framework (must match package name)
 */
@interface MobileMobile : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
/**
 * Create a gomobile compatible wrapper around TextileNode
 */
- (MobileWrapper*)newNode:(NSString*)repoPath centralApiURL:(NSString*)centralApiURL logLevel:(NSString*)logLevel error:(NSError**)error;
@end

/**
 * Wrapper is the object exposed in the frameworks
 */
@interface MobileWrapper : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
- (NSString*)repoPath;
- (void)setRepoPath:(NSString*)v;
/**
 * AddPhoto calls core AddPhoto
 */
- (NetMultipartRequest*)addPhoto:(NSString*)path thumb:(NSString*)thumb thread:(NSString*)thread error:(NSError**)error;
/**
 * GetAccessToken calls core GetAccessToken
 */
- (NSString*)getAccessToken:(NSError**)error;
/**
 * GetFileBase64 call core GetFileBase64
 */
- (NSString*)getFileBase64:(NSString*)path error:(NSError**)error;
/**
 * GetGatewayPassword returns the current cookie value expected by the gateway
 */
- (NSString*)getGatewayPassword;
/**
 * GetHashRequest calls core GetHashRequest
 */
- (NSString*)getHashRequest:(NSString*)hash error:(NSError**)error;
/**
 * GetPeerID returns our peer id
 */
- (NSString*)getPeerID:(NSError**)error;
/**
 * Get Photos returns core GetPhotos with json encoding
 */
- (NSString*)getPhotos:(NSString*)offsetId limit:(long)limit thread:(NSString*)thread error:(NSError**)error;
/**
 * GetUsername calls core GetUsername
 */
- (NSString*)getUsername:(NSError**)error;
/**
 * IsSignedIn calls core IsSignedIn
 */
- (BOOL)isSignedIn;
/**
 * PairDesktop publishes this nodes default album keys to a desktop node
which is listening at it's own peer id
 */
- (NSString*)pairDesktop:(NSString*)pkb64 error:(NSError**)error;
/**
 * SharePhoto calls core SharePhoto
 */
- (NetMultipartRequest*)sharePhoto:(NSString*)hash thread:(NSString*)thread caption:(NSString*)caption error:(NSError**)error;
/**
 * SignIn build credentials and calls core SignIn
 */
- (BOOL)signIn:(NSString*)username password:(NSString*)password error:(NSError**)error;
/**
 * SignOut calls core SignOut
 */
- (BOOL)signOut:(NSError**)error;
/**
 * SignUpWithEmail creates an email based registration and calls core signup
 */
- (BOOL)signUpWithEmail:(NSString*)username password:(NSString*)password email:(NSString*)email referral:(NSString*)referral error:(NSError**)error;
/**
 * Start the mobile node
 */
- (BOOL)start:(NSError**)error;
/**
 * Stop the mobile node
 */
- (BOOL)stop:(NSError**)error;
@end

/**
 * NewNode is the mobile entry point for creating a node
NOTE: logLevel is one of: CRITICAL ERROR WARNING NOTICE INFO DEBUG
 */
FOUNDATION_EXPORT MobileWrapper* MobileNewNode(NSString* repoPath, NSString* centralApiURL, NSString* logLevel, NSError** error);

#endif
