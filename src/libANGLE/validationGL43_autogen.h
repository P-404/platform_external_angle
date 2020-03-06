// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml and wgl.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// validationGL43_autogen.h:
//   Validation functions for the OpenGL 4.3 entry points.

#ifndef LIBANGLE_VALIDATION_GL43_AUTOGEN_H_
#define LIBANGLE_VALIDATION_GL43_AUTOGEN_H_

#include "common/PackedEnums.h"

namespace gl
{
class Context;

bool ValidateClearBufferData(Context *context,
                             GLenum target,
                             GLenum internalformat,
                             GLenum format,
                             GLenum type,
                             const void *data);
bool ValidateClearBufferSubData(Context *context,
                                GLenum target,
                                GLenum internalformat,
                                GLintptr offset,
                                GLsizeiptr size,
                                GLenum format,
                                GLenum type,
                                const void *data);
bool ValidateGetInternalformati64v(Context *context,
                                   GLenum target,
                                   GLenum internalformat,
                                   GLenum pname,
                                   GLsizei bufSize,
                                   GLint64 *params);
bool ValidateGetProgramResourceLocationIndex(Context *context,
                                             ShaderProgramID programPacked,
                                             GLenum programInterface,
                                             const GLchar *name);
bool ValidateInvalidateBufferData(Context *context, BufferID bufferPacked);
bool ValidateInvalidateBufferSubData(Context *context,
                                     BufferID bufferPacked,
                                     GLintptr offset,
                                     GLsizeiptr length);
bool ValidateInvalidateTexImage(Context *context, TextureID texturePacked, GLint level);
bool ValidateInvalidateTexSubImage(Context *context,
                                   TextureID texturePacked,
                                   GLint level,
                                   GLint xoffset,
                                   GLint yoffset,
                                   GLint zoffset,
                                   GLsizei width,
                                   GLsizei height,
                                   GLsizei depth);
bool ValidateMultiDrawArraysIndirect(Context *context,
                                     GLenum mode,
                                     const void *indirect,
                                     GLsizei drawcount,
                                     GLsizei stride);
bool ValidateMultiDrawElementsIndirect(Context *context,
                                       GLenum mode,
                                       GLenum type,
                                       const void *indirect,
                                       GLsizei drawcount,
                                       GLsizei stride);
bool ValidateShaderStorageBlockBinding(Context *context,
                                       ShaderProgramID programPacked,
                                       GLuint storageBlockIndex,
                                       GLuint storageBlockBinding);
bool ValidateTextureView(Context *context,
                         TextureID texturePacked,
                         GLenum target,
                         GLuint origtexture,
                         GLenum internalformat,
                         GLuint minlevel,
                         GLuint numlevels,
                         GLuint minlayer,
                         GLuint numlayers);
bool ValidateVertexAttribLFormat(Context *context,
                                 GLuint attribindex,
                                 GLint size,
                                 GLenum type,
                                 GLuint relativeoffset);
}  // namespace gl

#endif  // LIBANGLE_VALIDATION_GL43_AUTOGEN_H_
