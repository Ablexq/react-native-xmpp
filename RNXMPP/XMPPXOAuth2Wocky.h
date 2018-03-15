//
//  XMPPXOAuth2Google.h
//  Off the Record
//
//  Created by David Chiles on 9/13/13.
//  Copyright (c) 2013 Chris Ballinger. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XMPPSASLAuthentication.h"
#import "XMPPStream.h"

@interface XMPPXOAuth2Wocky : NSObject <XMPPSASLAuthentication>

-(id)initWithStream:(XMPPStream *)stream accessToken:(NSString *)accessToken;

@end



@interface XMPPStream (XMPPXOAuth2Wocky)


- (BOOL)supportsXOAuth2WockyAuthentication;

- (BOOL)authenticateWithFirebaseToken:(NSString *)accessToken error:(NSError **)errPtr;

@end
