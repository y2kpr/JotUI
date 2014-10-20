//
//  JotGLContext.h
//  JotUI
//
//  Created by Adam Wulf on 9/23/13.
//  Copyright (c) 2013 Adonit. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>

@interface JotGLContext : EAGLContext

@property (assign) BOOL needsFlush;

-(id) initWithAPI:(EAGLRenderingAPI)api __attribute__((unavailable("Must use initWithAPI:andValidateThreadWith: instead.")));

-(id) initWithAPI:(EAGLRenderingAPI)api sharegroup:(EAGLSharegroup *)sharegroup __attribute__((unavailable("Must use initWithAPI:sharegroup:andValidateThreadWith: instead.")));

-(id) initWithAPI:(EAGLRenderingAPI)api andValidateThreadWith:(BOOL(^)())_validateThread;

-(id) initWithAPI:(EAGLRenderingAPI)api sharegroup:(EAGLSharegroup *)sharegroup andValidateThreadWith:(BOOL(^)())_validateThread;

-(void) glColor4f:(GLfloat)red and:(GLfloat)green and:(GLfloat)blue and:(GLfloat) alpha;

-(void) glEnableClientState:(GLenum)array;

-(void) glDisableClientState:(GLenum)array;

-(void) flush;

-(void) finish;

-(void) prepOpenGLBlendModeForColor:(UIColor*)color;

-(void) glBlendFunc:(GLenum)sfactor and:(GLenum)dfactor;

@end
